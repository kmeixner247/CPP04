/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:23:17 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 21:52:07 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Cure : public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &rhs);
	Cure &operator=(Cure const &rhs);
	AMateria *clone() const;
	virtual void use(ICharacter &target) const;
private:
};

#endif
