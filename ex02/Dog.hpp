/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:13:59 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:57:32 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Dog : public AAnimal{
public:
	Dog();
	Dog(Dog const &rhs);
	Dog &operator=(Dog const &rhs);
	~Dog();
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
	void makeSound() const;
private:
	Brain	*_brain;
};
#endif