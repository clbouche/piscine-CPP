/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalarConv.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:49:45 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 13:54:00 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONV_HPP
# define SCALARCONV_HPP 

#include <exception>
#include <iostream>
#include <cctype>
#include <cmath>
#include <climits>

class scalarConv
{
private:
	double	_vSrc;
	char	_vChar;
	int		_vInt;
	float	_vFloat;
	double	_vDouble;
	
public:

//constructors
	scalarConv(void);
	scalarConv(char **value);
	scalarConv(const scalarConv &src);

//operators
	scalarConv &operator=(const scalarConv &other);

//destructor
	~scalarConv();

//getter & setter
	char	getChar() const;
	int		getInt() const;
	float	getFloat() const;
	double	getDouble() const;

	void	setChar(double vSrc);
	void	setInt(double vSrc);
	void	setFloat(double vSrc);
	void	setDouble(double vSrc);

//members functions

void		printChar(std::ostream &flux = std::cout) const;
void		printInt(std::ostream &flux = std::cout) const;
void		printFloat(std::ostream &flux = std::cout) const;
void		printDouble(std::ostream &flux = std::cout) const;

//exceptions
	class	ImpossibleConversion : public std::exception
	{
		public : 
			virtual const char *what() const throw() { return ("./conv [arg]. I need a second information bro"); }
	};
};

std::ostream	&operator<<(std::ostream &flux, const scalarConv &src);


#endif