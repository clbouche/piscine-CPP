/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:32:02 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/05 15:07:06 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP 
 

#include <string> 

class Weapon
{
private:
	std::string	_type;
	
public:
	void	setType(std::string type);
	std::string const &getType(void) const;

	Weapon(void);
	Weapon(std::string type);
	~Weapon();
};

#endif
