/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:33:56 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 14:26:12 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {std::cout << "Animal constructor called\n";}

Animal::Animal(std::string type1) : type(type1) {std::cout << "Animal constructor called\n";}

Animal::Animal(const Animal& other) : type(other.type){}

Animal& Animal::operator=(const Animal& other){
	Animal::operator=(other);
	return *this;
}

Animal::~Animal(){std::cout << "Animal destructor called\n";}

void Animal::makeSound()const {std::cout << "Animal sound\n";}

std::string Animal::getType() const {return type;}