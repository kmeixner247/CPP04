/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:46:55 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 22:04:01 by kmeixner         ###   ########.fr       */
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

Character::Character(std::string const name) : _name(name)
{
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
	int i = 0;
	while (i < 4 && (this->inventory[i]))
		i++;
	if (i < 4)
		this->inventory[i] = m->clone();
}

void Character::unequip(int index)
{
	this->inventory[index] = 0; //CHANGE
}

void Character::use(int index, ICharacter& target)
{
	this->inventory[index]->use(target);
}
