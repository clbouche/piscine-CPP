/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:45:41 by claclou           #+#    #+#             */
/*   Updated: 2022/01/07 11:13:33 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
private:

	std::string	_levels[4];

	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	
public:

	void complain( std::string level );


	Karen(void);
	~Karen();
};


#endif 