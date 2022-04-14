/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:19:39 by claclou           #+#    #+#             */
/*   Updated: 2022/01/12 14:20:11 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** MEMBERS FUNCTIONS
*/

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound is undefined" << std::endl;
	return ;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

/*
** OPERATORS
*/

WrongAnimal	WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/*
** CONSTRUCTORS
*/

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "WrongAnimal type constructor called" << std::endl;
	return ;
}

/*
** DESTRUCTOR
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}
