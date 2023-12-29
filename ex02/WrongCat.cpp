/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:43:18 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 14:54:35 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {type = "WrongCat"; std::cout << "WrongCat constructor called\n";}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	WrongAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat(){std::cout << "Destructor WrongCat called\n";}

void WrongCat::makeSound() const {std::cout << "Miaou\n";}
