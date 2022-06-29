/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:33:59 by kmeixner          #+#    #+#             */
/*   Updated: 2022/06/29 13:41:33 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <string>
class Brain {
public:
	Brain();
	Brain(Brain const &rhs);
	Brain &operator=(Brain const &rhs);
	~Brain();
	std::string getIdea(int index) const;
	void setIdea(int index, std::string idea);

private:
	std::string _ideas[100];
};
#endif