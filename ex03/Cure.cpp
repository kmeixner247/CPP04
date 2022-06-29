/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:24:43 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 22:03:16 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(Cure const &rhs)
{
	this->_type = rhs._type;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria *Cure::clone() const
{
	AMateria *newMat = new Cure;
	return (newMat);
}

void Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds. *" << std::endl;
}