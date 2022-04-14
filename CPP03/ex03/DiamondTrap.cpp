/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:11:04 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/03 16:00:22 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*
** MEMBERS FUNCTIONS
*/

void DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << BLUE2 << this->_name << END 
			<< " and my ClapTrap name is " << BLUE2 
			<< ClapTrap::_name << END
			<< std::endl << std::endl; 
	return ;
}

void	DiamondTrap::attack(std::string const & target)
{
	//(void)target;
	//return ;
	this->ScavTrap::attack(target);
}

/*
** OPERATORS
*/

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "Assignation operator called"<< std::endl;
	ClapTrap::operator=(other);
	return *this;
}

/*
** CONSTRUCTORS
*/
DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap()
{
	std::cout << "Hello 👏 to DiamondTrap(void)" << std::endl;
	this->DiamondTrap::_name = "default";
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) 
{
	std::cout << YELLOW << "Copy constructor called - DiamondTrap" << END << std::endl;
	*this = src;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_clap_name"), ScavTrap(name + "_clap_name")
{
	std::cout << "Hello 👏 to DiamondTrap(" << name << ")" << std::endl;
	this->DiamondTrap::_name = name;
	this->FragTrap::_hitPoints = 100;
	this->ScavTrap::_energyPoints = 50;
	this->FragTrap::_attackDamage = 30;
}


/*
** DESTRUCTORS
*/

DiamondTrap::~DiamondTrap(void)
{
	std::cout << YELLOW << "Destructor called - DiamondTrap" << END << std::endl;
	return ;
}