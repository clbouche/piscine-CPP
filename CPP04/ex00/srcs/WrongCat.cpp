/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:22:50 by claclou           #+#    #+#             */
/*   Updated: 2022/01/12 14:26:59 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** MEMBERS FUNCTIONS
*/

void	WrongCat::makeSound(void) const
{
	std::cout << "Meoooow Meoooow 🐱 " << std::endl;
	return ;
}

/*
** OPERATORS
*/

WrongCat	WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/*
** CONSTRUCTORS
*/

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return;
}

/*
** DESTRUCTOR
*/

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}