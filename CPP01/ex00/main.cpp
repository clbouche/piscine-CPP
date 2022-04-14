/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:38:44 by claclou           #+#    #+#             */
/*   Updated: 2022/01/25 15:37:22 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int main(void)
{
	Zombie* Z_1;
	Zombie* Z_2;
	Zombie* Z_3;
	Zombie*	Z_4;
	Z_1 =  newZombie("Martin");
	Z_2 =  newZombie("Gregory");
	Z_3 =  newZombie("Damien");
	Z_4 =  newZombie("Foo");
	randomChump("Clara");
	randomChump("Franck");
	randomChump("Laurence");
	delete Z_1;
	delete Z_2;
	delete Z_3;
	delete Z_4;
}