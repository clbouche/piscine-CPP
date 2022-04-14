/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:41:42 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/03 16:00:34 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	DiamondTrap diamondy("Diamondy");
	FragTrap	fraggy("Fraggy");

	fraggy.attack("a first random human");
	diamondy.FragTrap::takeDamage(19);
	diamondy.attack("random human");
	diamondy.ScavTrap::beRepaired(18);
	diamondy.whoAmI();
	return (0);
}