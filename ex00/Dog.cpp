/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:34:42 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 14:26:40 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {type = "Dog"; std::cout << "Dog constructor called\n";}

Dog::Dog(const Dog& other) : Animal(other){}

Dog& Dog::operator=(const Dog& other) {
	Animal::operator=(other);
	return *this;
}

Dog::~Dog(){std::cout << "destructor Dog called\n";}

void Dog::makeSound() const {std::cout << "Wouf\n";}