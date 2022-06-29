/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:13:47 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/28 20:30:18 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal {
public:
	Animal();
	Animal(Animal const &rhs);
	Animal &operator=(Animal const &rhs);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string _type;
};
#endif