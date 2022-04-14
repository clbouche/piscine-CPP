/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:38:42 by claclou           #+#    #+#             */
/*   Updated: 2022/01/25 15:34:24 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce() const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << ": couic 🪦" << std::endl;
	return ;
}
