/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:29:43 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/02 12:16:53 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

/*
** MEMBERS FUNCTIONS
*/

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << BLUE2 << this->_name << END << " make a highfive to everyone !" << std::endl;
	return ;
}

void FragTrap::attack(std::string const & target)
{
	if (this->_hitPoints == 0)
		std::cout << "FragTrap " << BLUE2 << this->_name << END
				<< RED << " is dead " << END  << std::endl 
				<< std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "FragTrap " << BLUE2 << this->_name << END
				<< " can no longer attack. He has only " << RED
				<< this->_energyPoints << " energy points and "
				<< END << std::endl << std::endl;
	else 
	{
		std::cout << "FragTrap " << BLUE2 << this->_name << END
				<< " attack " << target << " causing " << RED 
				<< this->_attackDamage << " points of damage!"
				<< END << std::endl;
		this->_energyPoints -= 1;
		std::cout << "FragTrap " << BLUE2 << this->_name << END 
				<< " lost 1 point for attacking. He has " << RED
				<< this->_energyPoints << " energy points left." 
				<< END << std::endl << std::endl;
	}
}

/*
** OPERATORS
*/

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "Assignation operator called - FragTrap"<< std::endl;
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
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << BLUE3 << "Default constructor called - FragTrap" << END << std::endl;
	this->_name = "FRAGTRAP";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << BLUE3 << "Copy constructor called - FragTrap" << END << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << BLUE3 << "Name constructor called - FragTrap" << END << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}


/*
** DESTRUCTORS
*/

FragTrap::~FragTrap(void)
{
	std::cout << BLUE3 << "Destructor called - FragTrap" << END << std::endl;
	return ;
}
