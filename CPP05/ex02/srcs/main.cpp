/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:22:30 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 11:18:59 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << PINK << "______BUREAUCRAT_____" << END << std::endl;
	Bureaucrat	randomB;
	Bureaucrat	Martin("Martin", 120);
	Bureaucrat	Clara("Clara", 47);
	Bureaucrat	Theo("Theo", 34);
	Bureaucrat	Mathilde("Mathilde", 67);
	std::cout << std::endl;
	
	std::cout << PINK << "______FORMS_____" << END << std::endl;
	AForm	*shForm = new ShrubberyCreationForm("maison");
	AForm	*robotForm = new RobotomyRequestForm("cuisine");
	AForm	*presForm = new PresidentialPardonForm("sdb");

	std::cout << *shForm << std::endl;
	std::cout << *robotForm << std::endl;
	std::cout << *presForm << std::endl;
	
	std::cout << std::endl;

	std::cout << PINK << "______SIGNATURE_____" << END << std::endl;
	shForm->beSigned(Martin);
	robotForm->beSigned(Clara);
	presForm->beSigned(Theo);
	Martin.executeForm(*shForm);
	Clara.executeForm(*robotForm);
	Theo.executeForm(*presForm);

	delete	shForm;
	delete	robotForm;
	delete	presForm;
	return (0);
}