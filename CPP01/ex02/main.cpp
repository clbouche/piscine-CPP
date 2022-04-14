/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:59:52 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/25 15:46:33 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "adress in memory of the string : " << &str << std::endl;
	std::cout << "adress of the string by using stringPTR : " << stringPTR << std::endl;
	std::cout << "adress of the string by using stringREF : " << &stringREF << std::endl;

	std::cout << std::endl;
	std::cout << "string variable : " << str << std::endl;
	std::cout << "string using the pointer : " << *stringPTR << std::endl;
	std::cout << "string using the reference : " << stringREF <<std::endl;
	
	return (0);
}