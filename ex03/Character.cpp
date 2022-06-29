/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:46:55 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 17:16:45 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
}

Character::Character(Character &rhs) : _name(rhs._name)
{
	for (int i = 0; i < 4; i++)	//probably wrong
		this->inventory[i] = rhs.inventory[i];
}

Character::~Character()
{
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int index)
{
}

void Character::use(int index, ICharacter& target)
{
	this->inventory[index]->use(target);
}
