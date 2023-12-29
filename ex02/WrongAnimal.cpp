/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:29:52 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 14:40:00 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){std::cout << "WrongAnimal constructor called\n";}

WrongAnimal::WrongAnimal(std::string type1) : type(type1) {std::cout << "WrongAnimal constructor called\n";}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {type = other.type;}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	WrongAnimal::operator=(other);
	return *this;
}

WrongAnimal::~WrongAnimal() {std::cout << "WrongAnimal destructor called\n";}

std::string WrongAnimal::getType() const {return type;}

void WrongAnimal::makeSound() const {std::cout << "WrongAnimal Sound\n";}