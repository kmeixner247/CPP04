/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:23:44 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/28 20:23:46 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>
class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
protected:
	std::string _type;
};
#endif