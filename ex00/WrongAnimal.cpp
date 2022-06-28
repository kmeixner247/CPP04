/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:13:48 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/28 20:22:08 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	this->_type = rhs._type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal copy assignment operator called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "wtf?!" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}
