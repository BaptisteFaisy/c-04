/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:34:04 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/30 17:09:38 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected :
	std::string type;
	Animal();
	Animal(std::string type1);

	Animal(const Animal& other);
	Animal& operator=(const Animal& other);
public :
	virtual ~Animal();

	std::string getType() const;

	virtual void makeSound() const = 0;
};

#endif