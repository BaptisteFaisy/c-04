/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 15:27:15 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 20:46:45 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private :
	std::string ideas[100];
public :
	Brain();

	Brain(const Brain& other);
	Brain& operator=(const Brain& other);

	void setideas(std::string test);
	
	void getideas();
	
	~Brain();
};

#endif