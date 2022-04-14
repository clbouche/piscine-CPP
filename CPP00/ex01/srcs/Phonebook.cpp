/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:31:46 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 10:34:49 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Utils.hpp"
#include <iostream>
#include <string>
# include <iomanip>

int	Phonebook::_contacts_set = 0;

/*
** CONSTRUCTOR
*/

Phonebook::Phonebook(void)
{
	return ;
}

/*
** MEMBERS FUNCTIONS
*/
void	Phonebook::add_contact(void)
{
	if (Phonebook::_contacts_set < 8)
		this->_contacts[this->_contacts_set++].create_contact();
	else 
		std::cout << "Too much contacts" << std::endl;
}


int	Phonebook::check_index(void) const
{
	std::string index;
	bool	good_index = false;
	int i;

	while(good_index == false)
	{
		std::cout << "Index n° >> " << std::ends;
		getline(std::cin, index);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl << "What a brutal goodbye...." << std::endl;
			exit(0);
		}
		i = ft_stoi(index);
		if (i == 0)
			std::cout << "Index 0 doesn't exist.....Sorry" << std::endl;
		else if (i == -1 && index != "exit")
			std::cout << "Try again ! An index should be understood as a positive number. 😉" << std::endl;
		else if (index.empty())
			std::cout << "Invalid input" << std::endl;
		else if (i > 8)
			std::cout << "It's a small small small phonebook, there are only a maximum of 8 contacts." << std::endl;
		else if (this->_contacts_set < i)
			std::cout << "To see a contact on this index, you must first create that contact." << std::endl;
		else if (index == "exit")
			return (-1);
		else
			good_index = true;
 	}
	return (i);
}

void	Phonebook::print_tab( void ) const
{
	int index = 0;
	
	std::cout<< "| Index |First name|Last  name| Nickname |" <<std::endl;
	while (index < this->_contacts_set)
	{
			std::cout << "|";
			std::cout << std::setw(7);
			std::cout << index + 1;
			print_info(this->_contacts[index].get_firstname());
			print_info(this->_contacts[index].get_lastname());
			print_info(this->_contacts[index].get_nickname());
			std::cout << "|" << std::endl;
			index++;
	}
}

void	Phonebook::search_contact(void) const
{
	int i;
	
	if (Phonebook::_contacts_set < 1)
		std::cout << "No contacts have been added to the phone book. " << std::endl;
	else
	{
		print_tab();
		std::cout << "If you want to leave, write 'exit'" << std::endl
					<< "Otherwise, enter a valid index." << std::endl;
		i = this->check_index();
		if (i == -1)
			std::cout << "Finally, you don't want to leaf through your phone book? " << std::endl;
		else
			this->_contacts[i - 1].print_contact();
	}
}

/*
** DESTRUCTOR
*/

Phonebook::~Phonebook(void)
{
	return ;
}