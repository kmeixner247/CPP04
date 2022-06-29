/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:14:28 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:44:04 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
}

Cat::Cat(Cat const &rhs)
{
	std::cout << "Cat copy constructor called." << std::endl;
	this->_brain = new Brain;
	*(this->_brain) = *(rhs._brain);
	this->_type = rhs._type;
}

Cat &Cat::operator=(Cat const &rhs)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	*(this->_brain) = *(rhs._brain);
	this->_type = rhs._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}

void Cat::setIdea(int index, std::string idea)
{
	std::cout << "Cat setIdea member function called." << std::endl;
	this->_brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	std::cout << "Cat getIdea member function called." << std::endl;
	return(this->_brain->getIdea(index));
}