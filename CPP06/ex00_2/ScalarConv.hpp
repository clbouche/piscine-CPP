/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConv.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:53:24 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/08 14:53:08 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONV_HPP
# define SCALARCONV_HPP 

#include <exception>
#include <iostream>
#include <cctype>
#include <cmath>
#include <climits>

class ScalarConv
{
private:
	char	*_vSrc;
	char	_vChar;
	int		_vInt;
	float	_vFloat;
	double	_vDouble;
	std::string	_type; 
	

public:

//constructors
	ScalarConv(void);
	ScalarConv(char **value);
	ScalarConv(const ScalarConv &src);

//operators
	ScalarConv &operator=(const ScalarConv &other);

//destructor
	~ScalarConv();

// //getter & setter
// 	char	getChar() const;
// 	int		getInt() const;
// 	float	getFloat() const;
// 	double	getDouble() const;

// 	void	setChar(double vSrc);
// 	void	setInt(double vSrc);
// 	void	setFloat(double vSrc);
// 	void	setDouble(double vSrc);

// //members functions

void		printChar(std::ostream &flux = std::cout) const;
void		printInt(std::ostream &flux = std::cout) const;
void		printFloat(std::ostream &flux = std::cout) const;
void		printDouble(std::ostream &flux = std::cout) const;

	void	convChar(void);
	void	convInt(void);
	void	convFloat(void);
	void	convDouble(void);
	void	convError(void);

bool	checkChar(char *_vSrc);
bool	checkInt(char *_vSrc);
bool	checkFloat(char *_vSrc);
bool	checkDouble(char *_vSrc);


//exceptions
	class	ImpossibleConversion : public std::exception
	{
		public : 
			virtual const char *what() const throw() { return ("./conv [arg]. I need a second information bro"); }
	};
};

std::ostream	&operator<<(std::ostream &flux, const ScalarConv &src);

typedef void (ScalarConv::*convFunction)(void);

#endif