/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 14:34:30 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 09:49:24 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contacts.hpp"
# include <string>
# include <iostream>

std::string	recup_info(const char *str)
{
	std::string info;

	while(info.empty())
	{
		std::cout << str << std::ends;
		getline(std::cin, info);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl << "What a brutal goodbye...." << std::endl;
			exit(0);
		}
		else if (info.empty())
			std::cout << "Invalid input" << std::endl;
	}
	return (info);
}

void	Contacts::create_contact(void)
{
	this->_firstname = recup_info("First name : ");	
	this->_lastname = recup_info("Last name : ");	
	this->_nickname = recup_info("Nickname : ");	
	this->_phone_number = recup_info("Phone number : ");	
	this->_darkest_secret = recup_info("Darkest secret : ");	
}

void	Contacts::print_contact(void) const
{
	std::cout << "First name : " << this->_firstname << std::endl;
	std::cout << "Last name : " << this->_lastname << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone number : " << this->_phone_number<< std::endl;
	std::cout << "Darkest secret : " << this->_darkest_secret << std::endl;
}

std::string	Contacts::get_firstname() const
{
	return (this->_firstname);
}

std::string	Contacts::get_lastname() const
{
	return (this->_lastname);
}

std::string	Contacts::get_nickname() const
{
	return (this->_nickname);
}

std::string	Contacts::get_number() const
{
	return (this->_phone_number);
}

std::string	Contacts::get_secret() const
{
	return (this->_darkest_secret);
}


Contacts::Contacts()
{
	return ;
}

Contacts::~Contacts()
{
	return ;
}
