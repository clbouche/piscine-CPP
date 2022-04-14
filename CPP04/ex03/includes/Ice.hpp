/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:44:52 by claclou           #+#    #+#             */
/*   Updated: 2022/02/04 14:02:18 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Ice : public AMateria
{
private: 
	
public:
	Ice(void);
	Ice(const Ice &src);
	
	virtual ~Ice();

	Ice	&operator=(const Ice &src);

	Ice* clone() const;
	void use(ICharacter& target);
};

#endif