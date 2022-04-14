/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:13:46 by claclou           #+#    #+#             */
/*   Updated: 2022/02/04 14:46:37 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**	CONSTRUCTORS
*/

Character::Character(void) : _name("unknow")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	
}

Character::Character(const Character &src)
{
	*this = src;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}
/*
**	DESTRUCTOR
*/

Character::~Character()
{
	for (int i = 0; i < 4; i++)
			delete this->_inventory[i];
}

/*
**	OPERATOR
*/

Character	&Character::operator=(Character const &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (other._inventory[i] != NULL)
				_inventory[i] = other._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}
	
/*
**	MEMBERS FUNCTIONS
*/

std::string const & Character::getName() const
{
	return(_name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	delete m;	
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;

}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || this->_inventory[idx] == NULL)
		return ;
	else
		this->_inventory[idx]->use(target);
}

