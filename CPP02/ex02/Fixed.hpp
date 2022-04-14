/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:33:43 by claclou           #+#    #+#             */
/*   Updated: 2022/01/10 17:01:19 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
# include <cmath>

class Fixed
{
private:
	int		_rawbits;
	const static int	_fracbits = 8;
	
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(int const n );
	Fixed(float const f);

	~Fixed( void );

	float toFloat(void) const;
	int toInt(void) const;
	void setRawBits(int const raw);
	int	getRawBits(void) const;
	
	Fixed&	operator=(const Fixed &other);
	Fixed	operator+(const Fixed &other);
	Fixed	operator-(const Fixed &other);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);

	bool	operator>(const Fixed &value) const;
	bool	operator<(const Fixed &value) const;
	bool	operator>=(const Fixed &value);
	bool	operator<=(const Fixed &value);
	bool	operator==(const Fixed &value);
	bool	operator!=(const Fixed &value);

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static Fixed&	min( Fixed &n1, Fixed &n2);
	static const Fixed&	min(const Fixed &n1, const Fixed &n2);
	static Fixed&	max( Fixed &n1, Fixed &n2);
	static const Fixed&	max(const Fixed &n1, const Fixed &n2);

};

std::ostream&	operator<<(std::ostream &flux, const Fixed &src);



#endif