/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:33:31 by bfaisy            #+#    #+#             */
/*   Updated: 2023/12/29 21:27:23 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main(int ac, char **av)
{
	Cat z;
	Dog Toutou2;
	if (ac != 2)
		return 0;
	if (std::atoi(av[1]) == 0){
		Animal* tab[10];
		int i = 0;
		while (i != 5)
		{
			tab[i] = new Dog();
			i++;
		}
		while (i != 10)
		{
			tab[i] = new Cat();
			i++;
		}
		i = 0;
		while (i != 10)
		{
			delete tab[i];
			i++;
		}
	}
	else if (std::atoi(av[1]) == 1)
	{
		{
		Cat david;
		david.setbrain("bonjour");
		z = david;
		}
		z.getbrain();
	}
	else if (std::atoi(av[1]) == 2){
		{
		Dog Toutou;
		Toutou.setbrain("test");
		Toutou2 = Toutou;
		}
		Toutou2.getbrain();
	}
}
