/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:13:59 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 13:53:45 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Cat : public Animal{
public:
	Cat();
	Cat(Cat const &rhs);
	Cat &operator=(Cat const &rhs);
	~Cat();
	void setIdea(int index, std::string idea);
	std::string getIdea(int index) const;
	void makeSound() const;
private:
	Brain	*_brain;
};
#endif