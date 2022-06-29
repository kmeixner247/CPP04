/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:14:28 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:48:08 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
}

Dog::Dog(Dog const &rhs)
{
	std::cout << "Dog copy constructor called." << std::endl;
	this->_brain = new Brain;
	*(this->_brain) = *(rhs._brain);
	this->_type = rhs._type;
}

Dog &Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	*(this->_brain) = *(rhs._brain);
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
	delete this->_brain;
}

void Dog::makeSound() const
{
	std::cout << "woof!" << std::endl;
}

void Dog::setIdea(int index, std::string idea)
{
	std::cout << "Dog setIdea member function called." << std::endl;
	this->_brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	std::cout << "Dog getIdea member function called." << std::endl;
	return(this->_brain->getIdea(index));
}