/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:37:27 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/02 11:51:39 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	fragTrap("Fraggy");
	
	fragTrap.attack("random alien");
	fragTrap.highFivesGuys();
	fragTrap.takeDamage(50);
	fragTrap.beRepaired(30);
	fragTrap.takeDamage(90);
	fragTrap.attack("random human");
	return (0);
}
