/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:37:27 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/31 17:07:59 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (!this->_weapon)
		std::cout << this->_name << " attacks with nothing ..." << std::endl;
	else
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
	return ;
}

HumanB::~HumanB()
{
	return ;
}
