/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConv.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:53:15 by claclou           #+#    #+#             */
/*   Updated: 2022/02/08 16:03:58 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConv.hpp"

/*
** CONTRUCTOR
*/

scalarConv::scalarConv(void)
{
	return ;
}

scalarConv::scalarConv(char **value)
{
	if (std::isprint(value[1][0]) && !value[1][1] && !std::isdigit(value[1][0]))
		_vSrc = static_cast<double>(value[1][0]);
	else
		_vSrc = atof(value[1]);
	setInt(_vSrc);
	setChar(_vSrc);
	setFloat(_vSrc);
	setDouble(_vSrc);
	return ;
}

scalarConv::scalarConv(const scalarConv &src)
{
	*this = src;
}

/*
** OPERATORS
*/


std::ostream	&operator<<(std::ostream &flux, const scalarConv &conv)
{
	conv.printChar(flux);
	conv.printInt(flux);
	conv.printFloat(flux);
	conv.printDouble(flux);
	return (flux);
}

scalarConv &scalarConv::operator=(const scalarConv &other)
{
	if (this != &other)
		_vSrc = other._vSrc;
	return (*this);
}

/*
** DESTRUCTOR
*/
scalarConv::~scalarConv()
{
	return ;
}

/*
** SETTERS
*/

void	scalarConv::setChar(double vSrc)
{
	this->_vChar = static_cast<char>(vSrc);
}

void	scalarConv::setInt(double vSrc)
{
	this->_vInt = static_cast<int>(vSrc);
}

void	scalarConv::setFloat(double vSrc)
{
	this->_vFloat = static_cast<float>(vSrc);
}

void	scalarConv::setDouble(double vSrc)
{
	_vDouble = vSrc;
}

/*
** GETTERS
*/

char	scalarConv::getChar() const
{
	return (this->_vChar);
}

int		scalarConv::getInt() const
{
	return (this->_vInt);
}

float	scalarConv::getFloat() const
{
	return (this->_vFloat);
}

double	scalarConv::getDouble() const
{
	return (this->_vDouble);
}

/*
** MEMBERS FUNCTIONS
*/

/*
** print functions
*/

void		scalarConv::printChar(std::ostream &flux) const
{
	flux << "char : ";
	if (std::isnan(_vSrc) || std::isinf(_vSrc))
		flux << "impossible" << std::endl;
	else if (!std::isprint(_vChar))
		flux << "Non displayable" << std::endl;
	else if (_vChar > 31 && _vChar < 127)
		flux << "'" << this->getChar() << "'" << std::endl;
}

void		scalarConv::printInt(std::ostream &flux) const
{
	flux << "int: ";
	if (std::isnan(_vSrc) || std::isinf(_vSrc) || _vSrc > INT_MAX || _vSrc < INT_MIN)
		flux << "impossible." << std::endl;
	else
		flux << this->getInt() << std::endl;
}

void		scalarConv::printFloat(std::ostream &flux) const
{
	flux << "float : " << this->getFloat();
	if (std::isnan(_vSrc) || std::isinf(_vSrc))
		flux << "f";
	else
		flux << ".0f";
	flux << std::endl;
}

void		scalarConv::printDouble(std::ostream &flux) const
{
	flux << "double : " << this->getFloat() << std::endl;
}