/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:23:24 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/28 20:23:33 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>
class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(WrongCat const &rhs);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();
	void makeSound() const;
};
#endif