/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:45:02 by claclou           #+#    #+#             */
/*   Updated: 2022/01/14 14:25:24 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** MEMBERS FUNCTIONS
*/

void	AAnimal::makeSound(void) const
{
	std::cout << "Animal sound is undefined" << std::endl;
	return ;
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}

/*
** OPERATORS
*/

AAnimal	&AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/*
** CONSTRUCTORS
*/

AAnimal::AAnimal(void) : _type("undefined")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
	return ;
}

/*
** DESTRUCTOR
*/

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}