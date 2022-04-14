/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:58:12 by claclou           #+#    #+#             */
/*   Updated: 2022/02/04 14:20:22 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
**	CONSTRUCTORS
*/

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(const Ice &src)
{
	*this = src;
}

/*
**	DESTRUCTOR
*/
Ice::~Ice()
{
	return ;
}

/*
**	OPERATOR
*/

Ice	&Ice::operator=(const Ice &src)
{
	//(void)src;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

/*
**	MEMBERS FUNCTIONS
*/

Ice	*Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<  target.getName() << " *" << std::endl;
}