/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:30:17 by claclou           #+#    #+#             */
/*   Updated: 2022/02/04 14:39:15 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MateriaSource.hpp"

/*
**	CONSTRUCTORS
*/

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/*
**	DESTRUCTOR
*/

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
}

/*
**	OPERATOR
*/

MateriaSource	&MateriaSource::operator=(MateriaSource const &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			if (other._inventory[i])
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


void MateriaSource::learnMateria(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			_inventory[i] = m->clone();
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i]->getType() == type)
			return (_inventory[i]->clone());
		else
			return (NULL);
	}
	return (0);
}