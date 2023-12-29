/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:34:42 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 21:13:29 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal() {type = "Dog"; std::cout << "Dog constructor called\n"; brain = new Brain;}

Dog::Dog(const Dog& other){
	brain = new Brain(*other.brain);
	type = other.type;
}

Dog& Dog::operator=(const Dog& other) {
	delete brain;
	type = other.type;
	brain = new Brain(*other.brain);
	return *this;
}

Dog::~Dog(){std::cout << "destructor Dog called\n"; delete brain;}

void Dog::makeSound() const {std::cout << "Wouf\n";}

void Dog::setbrain(std::string test) {brain->setideas(test);}

void Dog::getbrain() {brain->getideas();}