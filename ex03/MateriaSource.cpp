/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 17:32:02 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 17:43:35 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
}

MateriaSource::~MateriaSource()
{
}

void MateriaSource::learnMateria(AMateria *mat)
{
	int i = 0;

	while (this->_memory[i])
		i++;
	if (i < 4)
		this->_memory[i] = mat->clone();
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