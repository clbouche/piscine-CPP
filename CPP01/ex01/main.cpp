/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:57:00 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/05 13:56:22 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main (void){
	Zombie *zombies;
	int N = 6;
	zombies = zombieHorde(6, "Zombiiiiiiiie");
	for (int i = 0; i < N; i++)
	{
		zombies->announce();
	}
	delete [] zombies;
}