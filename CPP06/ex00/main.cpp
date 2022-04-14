/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 09:20:32 by claclou           #+#    #+#             */
/*   Updated: 2022/01/21 16:25:42 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scalarConv.hpp"



int main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			scalarConv	conv(argv);
			std::cout << conv;
		}
		else
			throw scalarConv::ImpossibleConversion();
	}
	catch(const scalarConv::ImpossibleConversion& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
