/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:33:43 by claclou           #+#    #+#             */
/*   Updated: 2022/02/01 13:51:24 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int		_rawBits;
	const static int	_Fracbits = 8;
	
public:
	Fixed(void);
	Fixed( Fixed const & src);
	
	~Fixed( void );

	int getRawBits(void) const;
	void setRawBits(int const raw);

	Fixed&	operator=(const Fixed &other);

};

#endif