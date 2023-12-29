/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:58:31 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 14:26:32 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {type = "Cat"; std::cout << "Cat constructor called\n";}

// a test
Cat::Cat(const Cat& other) : Animal(other) {}

Cat& Cat::operator=(const Cat& other)
{
	Animal::operator=(other);
	return *this;
}

Cat::~Cat(){std::cout << "Destructor cat called\n";}

void Cat::makeSound() const {std::cout << "Miaou\n";}
