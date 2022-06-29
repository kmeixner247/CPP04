/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:13:48 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:16:28 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const &rhs)
{
	std::cout << "Animal copy constructor called." << std::endl;
	this->_type = rhs._type;
}

Animal &Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal copy assignment operator called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "wtf?!" << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "Animal getType member function called." << std::endl;
	return (this->_type);
}
