/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:42:38 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/26 10:14:59 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

	std::string		_levels[4];

public:
	void complain( std::string level );

	Karen(void);
	~Karen(void);
};




#endif