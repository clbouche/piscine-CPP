/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:33:04 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/05 15:04:21 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string const &Weapon::getType(void) const
{
	return(this->_type);
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

Weapon::Weapon(void)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}