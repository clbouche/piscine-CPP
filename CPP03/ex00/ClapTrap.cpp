/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:04:41 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/02 11:43:25 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** MEMBERS FUNCTIONS
*/

void ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< RED << " is dead " << END  << std::endl 
				<< std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< " can no longer attack. He has only " << RED
				<< this->_energyPoints << " energy points."
				<< END << std::endl << std::endl;
	else 
	{
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< " attack " << target << " causing " << RED 
				<< this->_attackDamage << " points of damage!"
				<< END << std::endl;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << BLUE2 << this->_name << END 
				<< " lost 1 point for attacking. He has " << RED
				<< this->_energyPoints << " energy points left." 
				<< END << std::endl << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
			<< RED << " is dead " << END  << std::endl 
			<< std::endl;
	else 
	{
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< " take " << RED << amount << " damage !" 
				<< END << std::endl;
		if ((int)amount > _hitPoints)
			_hitPoints = 0;	
		else
			this->_hitPoints -= amount;
		std::cout << "ClapTrap " << BLUE2 << this->_name 
				<< END << " has only " << RED << this->_hitPoints 
				<< " hits points left." << END << std::endl << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
			<< RED << " is dead " << END  << std::endl 
			<< std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< " don't have the force to repair himself. He has " 
				<< RED << this->_energyPoints << " energy points." 
				<< END << std::endl << std::endl;
	else
	{
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< " repairs itself, it gets " << GREEN << amount 
				<< " hit points back." << END << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints -= 1;
		std::cout << "ClapTrap " << BLUE2 << this->_name << END
				<< " have " << RED << this->_hitPoints 
				<< " hits points and " << this->_energyPoints 
				<< " energy points left." << END << std::endl 
				<< std::endl;
	}
}

/*
** OPERATORS
*/

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
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

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BLUE1 << "Name contructor called" << END << std::endl;
	return ;
}

ClapTrap::ClapTrap(void) : _name("CLAPTRAP"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << BLUE1 << "Default constructor called" << END << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

/*
** DESTRUCTOR
*/

ClapTrap::~ClapTrap()
{
	std::cout << BLUE1 << "Destructor called" << END << std::endl;
	return ;
}