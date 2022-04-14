/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:38:13 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/03 12:16:52 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** MEMBERS FUNCTIONS 
*/

std::string const	&Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}

/*
** CONSTRUCTORS
*/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->_ideas[i] = "bonjour";
		else
			this->_ideas[i] = "bonsoir";
	}
	return ;
}

Brain::Brain(const Brain &src)
{
	(void)src;
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->_ideas[i] = "bonjour";
		else
			this->_ideas[i] = "bonsoir";
	}
}


/*
** OPERATORS
*/

Brain	Brain::operator=(const Brain &other)
{
if (this != &other)
	{
		for (size_t i = 0; i < 100 ; i++)
		{
			if (i % 2 == 0)
				this->_ideas[i] = "bonjour";
			else
				this->_ideas[i] = "bonsoir";
		}
	}
	return *this;
}

/*
** DESTRUCTOR
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}