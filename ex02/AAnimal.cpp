/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:13:48 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:56:43 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const &rhs)
{
	std::cout << "AAnimal copy constructor called." << std::endl;
	this->_type = rhs._type;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	std::cout << "AAnimal copy assignment operator called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called." << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "wtf?!" << std::endl;
}

std::string AAnimal::getType() const
{
	std::cout << "AAnimal getType member function called." << std::endl;
	return (this->_type);
}
