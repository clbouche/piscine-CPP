/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:36:45 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/03 13:35:32 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <cstdlib>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		Animal	*array_animals[nb];
		for (int i = 0; i < nb; i++)
		{
			if (i % 2 == 0)
				array_animals[i] = new Cat();
			else
				array_animals[i] = new Dog();
		}
		std::cout << std::endl;
		std::cout << "__________DEEP COPY :___________" << std::endl;
		Cat	copy(* (Cat *)array_animals[0]);
		for (size_t i = 0; i < 100; i++)
		{
			std::cout << RED << "Original : " << ((Cat *)array_animals[0])->getBrain()->getIdea(i) << END << std::endl;
			std::cout << GREEN << "Copy     : " << copy.getBrain()->getIdea(i) << END << std::endl << std::endl;
		}
		std::cout << "_____________________END COPY______________________" << std::endl << std::endl;
		for (int i = 0; i < nb; i++)
			delete array_animals[i];
	}
	// Can't create an Animal instance. Uncomment for test
	// Animal test;
	else
		std::cout << "[./brain] [number of animals]" << std::endl;
}