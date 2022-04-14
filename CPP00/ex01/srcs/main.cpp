/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:29:15 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 09:50:26 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contacts.hpp"
# include <string>
# include <iostream>

int main(void)
{
	std::string	input;
	Phonebook	phonebook;
	
	std::cout << "Welcome to the 80's !! " << std::endl
				<< "If you want to add a contact, write 'ADD'" << std::endl
				<< "If you want to search a contact, write 'SEARCH'" << std::endl
				<< "If you want to leave, write 'EXIT'" << std::endl;

	while(input != "EXIT")
	{
		std::cout << "> " << std::ends;
		getline(std::cin, input);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl << "What a brutal goodbye...." << std::endl;
			return (0);
		}
		if (input == "ADD")
			phonebook.add_contact();
		else if (input == "SEARCH")
			phonebook.search_contact();
	}
	std::cout << "Good Bye !" << std::endl;
	return (0);
}
