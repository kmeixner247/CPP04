/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:21:42 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/01 17:28:39 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	{
		std::cout << std::string(80, '-') << std::endl;
		std::cout << "TEST FROM SUBJECT" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::string(80, '-') << std::endl;
		std::cout << "MY TEST" << std::endl;
		IMateriaSource *icesrc = new MateriaSource();
		MateriaSource mixedsrc;
		for (int i = 0; i < 4; i++)
			icesrc->learnMateria(new Ice());
		mixedsrc.learnMateria(new Ice());
		mixedsrc.learnMateria(new Cure());
		mixedsrc.learnMateria(new Ice());
		mixedsrc.learnMateria(new Cure());
		icesrc->learnMateria(new Ice());
		mixedsrc.learnMateria(new Ice());
		MateriaSource mixedsrc2(mixedsrc);
		MateriaSource mixedsrc3;
		mixedsrc3 = mixedsrc2;
		ICharacter *phil = new Character("phil");
		Character bob("bob");
		Character bobcopy;
		phil->use(0, bob);
		bob.use(0, *phil);
		bob.equip(mixedsrc3.createMateria("ice"));
		bob.equip(mixedsrc3.createMateria("cure"));
		bob.equip(mixedsrc3.createMateria("ultima"));
		AMateria *tmp;
		for (int i = 0; i < 5; i++)
		{
			tmp = mixedsrc.createMateria("cure");
			bobcopy.equip(tmp);
		}
		delete tmp;
		bobcopy = bob;
		bob.equip(NULL);
		bob.use(0, *phil);
		bob.use(1, *phil);
		tmp = bob.getMateriaAddr(0);
		bob.unequip(0);
		bob.unequip(5);
		bob.use(0, *phil);
		delete tmp;
		delete icesrc;
		delete phil;
	}
	return 0;
}