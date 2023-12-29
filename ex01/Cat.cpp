/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:58:31 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 21:22:42 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal() {type = "Cat"; std::cout << "Cat constructor called\n"; brain = new Brain;}

Cat::Cat(const Cat& other) {

	brain = new Brain(*other.brain);
	type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
	delete brain;
	type = other.type;
	brain = new Brain(*other.brain);
	return *this;
}

Cat::~Cat(){std::cout << "Destructor cat called\n"; delete brain;}

void Cat::makeSound() const {std::cout << "Miaou\n";}

void Cat::setbrain(std::string test) {brain->setideas(test);}

void Cat::getbrain() {brain->getideas();}