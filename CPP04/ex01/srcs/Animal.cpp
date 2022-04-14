/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:45:02 by claclou           #+#    #+#             */
/*   Updated: 2022/01/27 12:11:10 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
** MEMBERS FUNCTIONS
*/

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound is undefined" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

/*
** OPERATORS
*/

Animal	Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/*
** CONSTRUCTORS
*/

Animal::Animal(void) : _type("undefined")
{
	std::cout << BLUE1 << "Animal default constructor called" << END << std::endl;
	return ;
}

Animal::Animal(const Animal &src)
{
	std::cout << BLUE1 << "Animal copy constructor called" << END << std::endl;
	*this = src;
	return;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << BLUE1 << "Animal type constructor called" << END << std::endl;
	return ;
}

/*
** DESTRUCTOR
*/

Animal::~Animal()
{
	std::cout << BLUE1 << "Animal destructor called" << END << std::endl;
	return ;
}
