/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:37:44 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/05 15:18:33 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP 
 

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*_weapon; 
	std::string	_name;

public:
	void	attack();
	void	setWeapon(Weapon &weapon);

	HumanB(std::string name);
	~HumanB();
};

#endif
