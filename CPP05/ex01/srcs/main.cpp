/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:22:30 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 16:50:12 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << PINK << "______BUREAUCRAT_____" << END << std::endl;
	Bureaucrat	randomB;
	Bureaucrat	badB1("BadB1", 0);
	Bureaucrat	badB2("BadB2", 153);
	Bureaucrat	Martin("Martin", 120);
	Bureaucrat	Clara("Clara", 12);
	Bureaucrat	Theo("Theo", 34);
	Bureaucrat	Mathilde("Mathilde", 67);
	std::cout << std::endl;
	
	std::cout << PINK << "______FORMS_____" << END << std::endl;
	Form	randomForm;
	Form	badF1("BadF1", 0, 122);
	Form	badF2("BadF2", 151, 100);
	Form	badF3("BadF3", 23, 160);
	Form	badF4("BadF4", 12, 0);
	Form	badF5("BadF2", 160, 0);
	Form	badF6("BadF2", 0, 154);
	Form	Form1("Form1", 10, 4);
	Form	Form2("Form1", 45, 45);
	Form	Form3("Form1", 100, 60);
	Form	Form4("Form1", 2, 120);

	std::cout << randomForm << std::endl;
	std::cout << badF1 << std::endl;
	std::cout << badF2 << std::endl;
	std::cout << badF3 << std::endl;
	std::cout << badF4 << std::endl;
	std::cout << badF5 << std::endl;
	std::cout << badF6 << std::endl;
	std::cout << Form1 << std::endl;
	std::cout << Form2 << std::endl;
	std::cout << Form3 << std::endl;
	std::cout << Form4 << std::endl;
	
	std::cout << PINK << "______SIGNATURE_____" << END << std::endl;
	Martin.signForm(randomForm);
	Clara.signForm(Form1);
	Theo.signForm(Form2);
	Mathilde.signForm(Form3);
	return (0);
}