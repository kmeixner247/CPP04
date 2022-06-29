/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:18:23 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 21:53:32 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
class ICharacter;
class AMateria
{
public:
	AMateria();
	AMateria(AMateria const &rhs);
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria &operator=(AMateria const &rhs);

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target) const = 0;

protected:
	std::string _type;
};
#endif