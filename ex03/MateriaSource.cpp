/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:32:02 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/01 17:30:26 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_memory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._memory[i])
		{
			this->_memory[i] = rhs._memory[i]->clone();
		}
		else
			this->_memory[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (rhs._memory[i])
			this->_memory[i] = rhs._memory[i]->clone();
		else
			this->_memory[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_memory[i])
			delete this->_memory[i];
}

void MateriaSource::learnMateria(AMateria *mat)
{
	int i = 0;

	while (i < 4 && this->_memory[i])
		i++;
	if (i < 4)
		this->_memory[i] = mat->clone();
	delete mat;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (i < 4 && this->_memory[i] && this->_memory[i]->getType().compare(type))
		i++;
	if (i < 4 && this->_memory[i])
		return (this->_memory[i]->clone());
	else
		return (0);
}