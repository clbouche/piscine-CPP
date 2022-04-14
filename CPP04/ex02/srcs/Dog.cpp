/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:50:05 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 12:12:34 by clbouche         ###   ########.fr       */
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

Brain	*Dog::getBrain( void ) const
{
	return this->_brain;
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

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << BLUE2 << "Dog default constructor called" << END << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : _brain(new Brain(*src._brain))
{
	std::cout << BLUE2 << "Dog copy constructor called" << END << std::endl;
	return;
}

/*
** DESTRUCTOR
*/

Dog::~Dog()
{
	std::cout << BLUE2 << "Dog destructor called" << END << std::endl;
	delete _brain;
	return ;
}
