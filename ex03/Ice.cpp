/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:39:33 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/01 17:16:19 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(Ice const &rhs)
{
	this->_type = rhs._type;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(Ice const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria *newMat = new Ice;
	return (newMat);
}

void Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}