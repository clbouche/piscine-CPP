/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:06:32 by claclou           #+#    #+#             */
/*   Updated: 2022/02/04 14:42:29 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
**	CONSTRUCTORS
*/

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(const Cure &src)
{
	*this = src;
}

/*
**	DESTRUCTOR
*/
Cure::~Cure()
{
	return ;
}

/*
**	OPERATOR
*/

Cure	&Cure::operator=(const Cure &src)
{
	//(void)src;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

/*
**	MEMBERS FUNCTIONS
*/

Cure	*Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
std::cout << "* heals " <<  target.getName() << "'s wounds *" << std::endl;
}