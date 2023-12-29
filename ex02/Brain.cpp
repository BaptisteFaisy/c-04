/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:26:57 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 20:46:38 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){std::cout << "constructor brain called\n";}

Brain::Brain(const Brain& other) {
	int i = 0;
	while (i != 100){
		ideas[i] = other.ideas[i];
		i++;}
}

Brain &Brain::operator=(const Brain& other) {	
	int i = 0;
	while (i != 100){
		ideas[i] = other.ideas[i];
		i++;}
	return *this;}

Brain::~Brain() {std::cout << "Destructor brain called\n";}

void Brain::setideas(std::string test) { ideas[0] = test;}
void Brain::getideas() {std::cout << "ideas 0 = " << ideas[0]<< std::endl;}