/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:33:43 by claclou           #+#    #+#             */
/*   Updated: 2022/01/26 11:23:45 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int		_rawBits;
	const static int	_fracBits = 8;
	
public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(const int v_int);
	Fixed(const float v_float);
	
	~Fixed( void );

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed&	operator=(const Fixed &other);

	float toFloat(void) const;
	int toInt(void) const;

};

std::ostream&	operator<<(std::ostream &flux, const Fixed &src);


#endif