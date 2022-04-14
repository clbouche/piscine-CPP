/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 09:45:14 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/28 09:45:20 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	int j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while(argv[i][j])
			{
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			if (i < argc)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	return (0);
}
