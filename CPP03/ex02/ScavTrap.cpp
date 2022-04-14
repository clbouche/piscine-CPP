/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:37:20 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/02 13:30:14 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*
** MEMBERS FUNCTIONS
*/
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << BLUE2 << this->_name << END << " is in Gate Keeper mode !" << std::endl;
	return ;
}

void ScavTrap::attack(std::string const & target)
{
	if (this->_hitPoints == 0)
		std::cout << "ScavTrap " << BLUE2 << this->_name << END
				<< RED << " is dead " << END  << std::endl 
				<< std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << BLUE2 << this->_name << END
				<< " can no longer attack. He has only " << RED
				<< this->_energyPoints << " energy points and "
				<< END << std::endl << std::endl;
	else 
	{
		std::cout << "ScavTrap " << BLUE2 << this->_name << END
				<< " attack " << target << " causing " << RED 
				<< this->_attackDamage << " points of damage!"
				<< END << std::endl;
		this->_energyPoints -= 1;
		std::cout << "ScavTrap " << BLUE2 << this->_name << END 
				<< " lost 1 point for attacking. He has " << RED
				<< this->_energyPoints << " energy points left." 
				<< END << std::endl << std::endl;
	}
}

/*
** OPERATORS
*/

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "Assignation operator called  - ScavTrap"<< std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

/*
** CONSTRUCTORS
*/
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << PURPLE << "Default constructor called - Scavtrap" << END << std::endl;
	this->_name = "SCAVTRAP";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << PURPLE << "Copy constructor called - Scavtrap" << END << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << PURPLE << "Name constructor called - Scavtrap" << END << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

/*
** DESTRUCTORS
*/

ScavTrap::~ScavTrap(void)
{
	std::cout << PURPLE << "Destructor called - Scavtrap" << END << std::endl;
	return ;
}
