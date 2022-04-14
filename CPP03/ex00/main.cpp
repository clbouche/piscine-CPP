/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:03:23 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/01 10:28:52 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap1("Clappy");
	ClapTrap	clapTrap2("Trappy");
	ClapTrap	clapTrap3;

	clapTrap3 = clapTrap1;
	
	clapTrap2.attack("random human");
	
	clapTrap1.takeDamage(5);
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.attack("random human");
	clapTrap1.takeDamage(5);
	clapTrap1.takeDamage(50);

	clapTrap2.attack("random human");
	clapTrap1.takeDamage(50);
	
	clapTrap1.beRepaired(0);
	clapTrap1.beRepaired(10);
	clapTrap1.attack("random human");
	clapTrap1.takeDamage(50);
	return (0);
}