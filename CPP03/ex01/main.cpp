/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:03:23 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/31 16:49:01 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("Clappy");
	ScavTrap	scavTrap("Scavvy");

	scavTrap.attack("random human");
	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(10);
	scavTrap.takeDamage(50);
	scavTrap.takeDamage(30);
	scavTrap.attack("random human");
	scavTrap.beRepaired(10);
	scavTrap.attack("random human");
	return (0);
}
	