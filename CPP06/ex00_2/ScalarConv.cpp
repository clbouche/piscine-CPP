/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConv.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:54:14 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/08 15:58:51 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConv.hpp"

/*
** CONSTRUCTORS 
*/

ScalarConv::ScalarConv(void)
{
	return ;	
}

ScalarConv::ScalarConv(char **value)
{
	this->_vSrc = value[1];
	if (this->checkInt(this->_vSrc) == false
		&& this->checkChar(this->_vSrc) == false 
		&& this->checkFloat(this->_vSrc) == false
		&& this->checkDouble(this->_vSrc) == false)
			this->_type = "error";
	
	std::string	convType[5] = {
		"char",
		"int",
		"float"
		"double",
		"error",
	};

	std::cout << "type : " << this->_type << std::endl;

	convFunction	convertisor[5] = {
		&ScalarConv::convChar,
		&ScalarConv::convInt,
		&ScalarConv::convFloat,
		&ScalarConv::convDouble,
		&ScalarConv::convError
	};
	for (int i = 0; i < 5; i++)
	{
		if (convType[i] == this->_type)
		{
			(this->*(convertisor[i]))();
			return ;
		}
	}
}

ScalarConv::ScalarConv(const ScalarConv &src)
{
	*this = src;
}

/*
** OPERATORS
*/

ScalarConv &ScalarConv::operator=(const ScalarConv &other)
{
	if (this != &other) {
		this->_vSrc = other._vSrc;
		this->_type = other._type;
		this->_vChar = other._vChar;
		this->_vInt = other._vInt;
		this->_vDouble = other._vDouble;
		this->_vFloat = other._vFloat;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &flux, const ScalarConv &conv)
{
	conv.printChar(flux);
	conv.printInt(flux);
	conv.printFloat(flux);
	conv.printDouble(flux);
	return (flux);
}

/*
** DESTRUCTOR
*/
ScalarConv::~ScalarConv()
{
	return ;
}

/*
** MEMBERS FUNCTIONS
*/

/*
** check functions
*/
bool	ScalarConv::checkChar(char *value)
{
	char c = value[0];
	
	if (value[1] != '\0' || std::isprint(c) == false)
		return (false);
	
	this->_vChar = c;
	this->_type = "char";
	return (true);
}

bool	ScalarConv::checkInt(char *value)
{
	char *end_ptr = NULL;
	long int i = strtol(value, &end_ptr, 10);

	if (*end_ptr != '\0' || i < INT_MIN || i > INT_MAX)
		return (false);
	
	this->_vInt = i;
	this->_type = "int";
	return (true);
}

bool	ScalarConv::checkFloat(char *value)
{
	char *end_ptr = NULL;
	float f = strtof(value, &end_ptr);
	
	if (*end_ptr != 'f' || *(end_ptr + 1) != '\0' || end_ptr - value <= 0)
		return (false);
	
	this->_vFloat = f;
	this->_type = "float";
	return (true);
}

bool	ScalarConv::checkDouble(char *value)
{
	char *end_ptr = NULL;
	double d = strtod(value, &end_ptr);

	if (*end_ptr != '\0')
		return (false);
		
	this->_vDouble = d;
	this->_type = "double";
	return (true);
}

/*
** conv functions
*/

void	ScalarConv::convChar(void)
{
	char c = this->_vChar;
	this->_vInt = static_cast<int>(c);
	this->_vFloat = static_cast<float>(c);
	this->_vDouble = static_cast<double>(c);
}

void	ScalarConv::convInt(void)
{
	int i = this->_vInt;
	this->_vChar = static_cast<char>(i);
	this->_vFloat = static_cast<float>(i);
	this->_vDouble = static_cast<double>(i);
}

void	ScalarConv::convFloat(void)
{
	int f = this->_vFloat;
	this->_vChar = static_cast<char>(f);
	this->_vInt = static_cast<int>(f);
	this->_vDouble = static_cast<double>(f);
}

void	ScalarConv::convDouble(void)
{
	int d = this->_vDouble;
	this->_vChar = static_cast<char>(d);
	this->_vFloat = static_cast<float>(d);
	this->_vInt = static_cast<int>(d);
}

void	ScalarConv::convError(void)
{
	(void)_vSrc;

}

/*
** print functions
*/

// _set_flags(void) {

// 	double d = this->_double;

// 	if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX)
// 		|| std::isnan(d) == true || std::isinf(d) == true)
// 		this->_flags |= IMPOSSIBLEINT | IMPOSSIBLECHAR;
// 	else if (d < CHAR_MIN || d > CHAR_MAX)
// 		this->_flags |= IMPOSSIBLECHAR;
// 	else if (std::isprint(this->_char) == false)
// 		this->_flags |= NONDISPLAYABLECHAR;
// }

void		ScalarConv::printChar(std::ostream &flux) const
{
	flux << "char : ";
	if (std::isnan(this->_vDouble) || std::isinf(this->_vDouble))
		flux << "impossible" << std::endl;
	else if (std::isprint(_vChar) == false)
		flux << "Non displayable" << std::endl;
	else
		flux << "'" << this->_vChar << "'" << std::endl;
}

void		ScalarConv::printInt(std::ostream &flux) const
{
	flux << "int: ";
	// if (std::isnan(_vSrc) || std::isinf(_vSrc) || _vSrc > INT_MAX || _vSrc < INT_MIN)
	// 	flux << "impossible." << std::endl;
	// else
		flux << this->_vInt << std::endl;
}

void		ScalarConv::printFloat(std::ostream &flux) const
{
	flux << "float : " << this->_vFloat << "f" << std::endl;
}

void		ScalarConv::printDouble(std::ostream &flux) const
{
	flux << "double : " << this->_vDouble << std::endl;
}