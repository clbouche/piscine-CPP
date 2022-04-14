/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:53:02 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/08 13:41:03 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConv.hpp"

int main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			ScalarConv	conv(argv);
			std::cout << conv;
		}
		else
			throw ScalarConv::ImpossibleConversion();
	}
	catch(const ScalarConv::ImpossibleConversion& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
