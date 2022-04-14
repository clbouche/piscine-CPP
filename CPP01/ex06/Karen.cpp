/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:46:42 by claclou           #+#    #+#             */
/*   Updated: 2022/01/26 10:18:01 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}
	
void Karen::complain( std::string level )
{
	void (Karen::*ft[4])( void ) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == _levels[i])
		{
			(this->*ft[i])();
			return ;
		}
	}
	return ;
}

Karen::Karen(void)
{
	this->_levels[0] = "DEBUG";
	this->_levels[1] = "INFO";
	this->_levels[2] = "WARNING";
	this->_levels[3] = "ERROR";
	return ;
}

Karen::~Karen()
{
	return ;
}
