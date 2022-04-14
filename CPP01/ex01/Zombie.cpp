/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:03:30 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/31 11:37:50 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	return ;
}

void 		Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}


Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << ": couic 🪦" << std::endl;
	return ;
}