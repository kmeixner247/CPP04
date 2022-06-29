/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:31:32 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 17:17:35 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(AMateria const &rhs) : _type(rhs._type)
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}