/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:34:19 by claclou           #+#    #+#             */
/*   Updated: 2022/01/26 11:25:31 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** CONSTRUCTORS
*/

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(Fixed const& src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int v_int) : _rawBits(v_int << _fracBits)
{
	std::cout<< "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float v_float) : _rawBits((int)roundf(v_float * (1 << _fracBits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;	
}

/*
** MEMBERS FUNCTIONS 
*/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawBits;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_rawBits = raw;
	return ;
}

float Fixed::toFloat(void) const
{
	return ((float)_rawBits/ (1 << _fracBits));
}

int	Fixed::toInt(void) const
{
	return ((int)(roundf((float)_rawBits / (1 << _fracBits))));
}

/*
** OPERATORS
*/

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called"<< std::endl;
	if (this != &other)
		this->_rawBits = other.getRawBits();
	return *this;
}

std::ostream&	operator<<(std::ostream &flux, const Fixed &src)
{
	flux << src.toFloat();
	return (flux);
}

/*
** DESTRUCTOR
*/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}