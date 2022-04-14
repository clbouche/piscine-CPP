/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:50:05 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 10:58:41 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** MEMBERS FUNCTIONS
*/

void	Dog::makeSound(void) const
{
	std::cout << BLUE2 << "Wooooof Wooooof 🐶 " << END << std::endl;
	return ;
}

/*
** OPERATORS
*/

Dog	Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/*
** CONSTRUCTORS
*/

Dog::Dog(void) : Animal("Dog")
{
	std::cout << BLUE2 << "Dog default constructor called" << END << std::endl;
	return ;
}

Dog::Dog(const Dog &src)
{
	std::cout << BLUE2 << "Dog copy constructor called" << END << std::endl;
	*this = src;
	return;
}

/*
** DESTRUCTOR
*/

Dog::~Dog()
{
	std::cout << BLUE2 << "Dog destructor called" << END << std::endl;
	return ;
}
