/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:23:38 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/28 20:23:42 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const &rhs)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	this->_type = rhs._type;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "WrongCat copy assignment operator called." << std::endl;
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "meow!" << std::endl;
}