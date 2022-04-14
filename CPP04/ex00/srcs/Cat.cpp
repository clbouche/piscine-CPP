/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:47:20 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 10:59:30 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** MEMBERS FUNCTIONS
*/

void	Cat::makeSound(void) const 
{
	std::cout << PURPLE << "Meooooow Meoooooow 🐱" << END << std::endl;
	return ;
}

/*
** OPERATORS
*/

Cat	Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

/*
** CONSTRUCTORS
*/

Cat::Cat(void) : Animal("Cat")
{
	std::cout << PURPLE << "Cat default constructor called" << END << std::endl;
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << PURPLE << "Cat copy constructor called" << END << std::endl;
	*this = src;
	return;
}


/*
** DESTRUCTOR
*/

Cat::~Cat()
{
	std::cout << PURPLE << "Cat destructor called" << END << std::endl;
	return ;
}
