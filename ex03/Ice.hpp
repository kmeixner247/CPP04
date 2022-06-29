/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 21:39:06 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 21:52:02 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &rhs);
	Ice &operator=(Ice const &rhs);
	AMateria *clone() const;
	virtual void use(ICharacter &target) const;
private:
};

#endif
