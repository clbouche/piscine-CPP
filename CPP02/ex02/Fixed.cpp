/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:34:19 by claclou           #+#    #+#             */
/*   Updated: 2022/01/10 17:01:22 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ACCESORS
*/

float Fixed::toFloat(void) const
{
	return ((float)_rawbits / (1 << _fracbits));
}

int Fixed::toInt(void) const
{
	return (this->_rawbits >> this->_fracbits);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_rawbits;
}

void Fixed::setRawBits(int const raw)
{
	this->_rawbits = raw;
	return ;
}

/*
** OPERATORS
*/

std::ostream&	operator<<(std::ostream &flux, const Fixed &src)
{
	flux << src.toFloat();
	return (flux);
}

/*
** Comparison operators
*/ 

bool	Fixed::operator>(const Fixed &value) const
{
	if (this->_rawbits > value._rawbits)
			return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed &value) const
{
	if (this->_rawbits < value._rawbits)
			return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &value)
{
	if (this->_rawbits >= value._rawbits)
			return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &value)
{
	if (this->_rawbits <= value._rawbits)
			return (true);
	return (false);	
}

bool	Fixed::operator==(const Fixed &value)
{
	if (this->_rawbits == value._rawbits)
			return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed &value)
{
	if (this->_rawbits != value._rawbits)
			return (true);
	return (false);	
}

/*
** Arithmetical operators
*/

Fixed&	Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called"<< std::endl;
	if (this != &other)
		this->_rawbits = other._rawbits;
	return *this;
}

Fixed	Fixed::operator+(const Fixed &other)
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

/*
** _crementation operators
*/ 

Fixed&	Fixed::operator++(void)
{
	++(_rawbits);
	return(*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed		rslt;

	rslt.setRawBits(_rawbits);
	this->_rawbits++;
	return (rslt);
}

Fixed&	Fixed::operator--(void)
{
	--(_rawbits);
	return (*this);	
}

Fixed	Fixed::operator--(int)
{
	Fixed		rslt;

	rslt.setRawBits(_rawbits);
	this->_rawbits--;
	return (rslt);
}

/*
** Minimum / maximum operators
*/

Fixed&			Fixed::min( Fixed &n1, Fixed &n2)
{
	return (n1 < n2 ? n1 : n2);
}

const Fixed& Fixed::min(const Fixed &n1, const Fixed &n2)
{
	return (n1 < n2 ? n1 : n2);
}

Fixed&			Fixed::max( Fixed &n1, Fixed &n2)
{
	return (n1 > n2 ? n1 : n2);
}

const Fixed& Fixed::max(const Fixed &n1, const Fixed &n2)
{
	return (n1 > n2 ? n1 : n2);

}

/*
** DESTRUCTOR
*/

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/*
** CONSTRUCTORS
*/

Fixed::Fixed(int const n) : _rawbits(n << this->_fracbits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}


Fixed::Fixed(float const f) : _rawbits( (int)roundf(f * (1 << this->_fracbits)))
{
	//mettre condition d'affichage 
	//std::cout << "Float constructor called"	<< std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(void) : _rawbits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}
