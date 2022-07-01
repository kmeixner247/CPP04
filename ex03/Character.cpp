/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:46:55 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/01 17:32:00 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("default")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character &rhs) : _name(rhs._name)
{
	for (int i = 0; i < 4; i++)
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
}

Character::Character(std::string const name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (rhs._inventory[i])
			this->_inventory[i] = rhs._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

AMateria *Character::getMateriaAddr(int index) const
{
	return (this->_inventory[index]);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	if (!m)
		return ;
	while (i < 4 && (this->_inventory[i]))
		i++;
	if (i < 4)
		this->_inventory[i] = m;
}

void Character::unequip(int index)
{
	if (this->_inventory[index])
		this->_inventory[index] = 0;
}

void Character::use(int index, ICharacter& target)
{
	if (index < 4 && this->_inventory[index])
		this->_inventory[index]->use(target);
}
