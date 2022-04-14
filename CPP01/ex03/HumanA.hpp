/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:34:38 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/05 15:10:06 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP 

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon	&_weapon; 
	std::string	_name;

public:
	void	attack();

	HumanA(std::string name, Weapon &weapon);
	~HumanA();
};

#endif
