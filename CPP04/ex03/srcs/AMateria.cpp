/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:36:07 by claclou           #+#    #+#             */
/*   Updated: 2022/01/18 11:07:44 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

AMateria::AMateria(void) : _type("undefined")
{
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

/*
** DESTRUCTORS
*/

AMateria::~AMateria()
{
	return ;
}

/*
** OPERATORS
*/

AMateria	&AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}

/*
** MEMBERS FUNCTIONS
*/

std::string const & AMateria::getType() const
{
	return (_type);	
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* use " <<  target.getName() << "'s Amateria *" << std::endl;
}