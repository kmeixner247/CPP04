/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:32:02 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/01 13:19:35 by kmeixner         ###   ########.fr       */
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
	int i = 0;
	while (rhs._memory[i])
		this->_memory[i] = rhs._memory[i];	//probably not
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	int i = 0;
	while (rhs._memory[i])
		this->_memory[i] = rhs._memory[i];	//probably not
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; this->_memory[i]; i++)
		delete this->_memory[i];
}

void MateriaSource::learnMateria(AMateria *mat)
{
	int i = 0;

	while (this->_memory[i])
		i++;
	if (i < 4)
		this->_memory[i] = mat;
	// delete mat;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (this->_memory[i] && this->_memory[i]->getType().compare(type))
		i++;
	if (i < 4)
		return (this->_memory[i]->clone());
	else
		return (0);
}