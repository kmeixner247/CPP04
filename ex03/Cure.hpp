/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:23:17 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 17:25:31 by kmeixner         ###   ########.fr       */
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
	void use(ICharacter &target) const;
private:
};

#endif
