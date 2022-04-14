/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:22:30 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 16:51:29 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << PINK << "__________CREATE BUREAUCRAT__________" << END << std::endl;

	Bureaucrat BureaucratA("Bob", 1);
	Bureaucrat BureaucratB("John", 150);
	Bureaucrat BureaucratC("Zak", 0); // -> exception too high
	Bureaucrat BureaucratD("Max", 151); // -> exception too low

	std::cout << std::endl;
	std::cout << PINK << "__________INCREMENTATION AND DECREMENTATION - exception__________" << END << std::endl;

	BureaucratA.incrGrade(); // -> exception too high
	std::cout << BureaucratA.getGrade() << std::endl; 
	BureaucratB.decrGrade(); // -> exception too low
	std::cout << BureaucratB.getGrade() << std::endl; 

	std::cout << std::endl;
	std::cout << PINK << "__________INCREMENTATION AND DECREMENTATION - valid__________" << END << std::endl;

	BureaucratA.decrGrade(); //-> back to a valid grade
	std::cout << BureaucratA.getGrade() << std::endl; 
	BureaucratB.incrGrade();//-> same
	std::cout << BureaucratB.getGrade() << std::endl;

	std::cout << std::endl;
	std::cout << PINK << "__________OVERLOAD OPERATOR__________" << END << std::endl;

	std::cout << BureaucratA;
	return (0);
}