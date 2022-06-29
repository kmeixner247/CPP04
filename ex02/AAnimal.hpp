/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:13:47 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 14:57:46 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>
class AAnimal {
public:
	AAnimal();
	AAnimal(AAnimal const &rhs);
	AAnimal &operator=(AAnimal const &rhs);
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	std::string getType() const;
protected:
	std::string _type;
};
#endif