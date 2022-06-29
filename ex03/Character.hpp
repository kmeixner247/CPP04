/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 16:47:02 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 17:00:17 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include <string>
#include "Amateria.hpp"
class Character : public ICharacter
{
public:
	Character();
	Character(Character &rhs);
	~Character();
	Character &operator=(Character const &rhs);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int index);
	void use(int index, ICharacter& target);

private:
	std::string _name;
	AMateria *inventory[4];
};
#endif	