/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:44:40 by claclou           #+#    #+#             */
/*   Updated: 2022/01/26 10:18:39 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

static int	get_saltlevel(std::string level)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (i);
	}
	return (4);
}

int main(int argc, char **argv)
{
	Karen	client;
	int		level;

	if (argc < 2)
	{
		std::cout << "[🧷 ]" << std::endl << "Karen says nothing for once, we can hear a pin drop" << std::endl; 
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "[🗣  BLABLABLA]"<< std::endl << "Karen complains too much." << std::endl; 
		return (0);
	}
	level = get_saltlevel(argv[1]);
	switch (level)
	{
	case 0:
		client.complain("DEBUG");
	case 1: 
		client.complain("INFO");
	case 2: 
		client.complain("WARNING");
	case 3:
		client.complain("ERROR");
		break;
	case 4:
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return (0);
}