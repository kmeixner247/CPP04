/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:52:26 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:58:50 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << std::string(80, '-') << std::endl;
		std::cout << "TEST FROM SUBJECT" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	{
		std::cout << std::string(80, '-') << std::endl;
		std::cout << "MY OWN TESTS" << std::endl;
		Animal *arr[10];
		for (int i = 0; i < 5; i++)
		{
			arr[i] = new Cat();
			arr[i+5] = new Dog();
		}
		srand (time(NULL));
		int index = rand() % 100;
		std::cout << "\x1B[32m" << static_cast<Cat*>(arr[0])->getIdea(index) << "\033[0m" << std::endl;
		std::cout << "\x1B[33m" << static_cast<Dog*>(arr[5])->getIdea(index) << "\033[0m" << std::endl;
		static_cast<Cat*>(arr[0])->setIdea(index, "YOU KNOW WHAT I'LL JUST SLEEP");
		std::cout << "\x1B[32m" << static_cast<Cat*>(arr[0])->getIdea(index) << "\033[0m" << std::endl;
		std::cout << "\x1B[33m" << static_cast<Dog*>(arr[5])->getIdea(index) << "\033[0m" << std::endl;
		Dog tempDog(*static_cast<Dog*>(arr[0]));
		std::cout << "\x1B[32m" << tempDog.getIdea(index) << "\033[0m" <<std::endl;
		Dog tempDog2;
		std::cout << "\x1B[32m" << tempDog2.getIdea(index) << "\033[0m" << std::endl;
		tempDog2 = tempDog;
		std::cout << "\x1B[32m" << tempDog2.getIdea(index) << "\033[0m" << std::endl;
		for (int i = 0; i < 10; i++)
			delete arr[i];
	}
	return 0;
}