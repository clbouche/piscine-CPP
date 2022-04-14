/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:22:30 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 12:01:53 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << PINK << "______CREATION_____" << END << std::endl;
	Bureaucrat	Clara("Clara", 25);
	Intern	someRandomIntern;
	AForm*	shForm;
	AForm*	robotForm;
	AForm*	presForm;
	AForm*	badForm;
	
	shForm = someRandomIntern.makeForm("shrubbery creation", "House");
	robotForm = someRandomIntern.makeForm("robotomy request", "Bender");
	presForm = someRandomIntern.makeForm("presidential pardon", "Bobby");
	badForm = someRandomIntern.makeForm("prout", "unknow");
	std::cout << std::endl;

	std::cout << *shForm << std::endl;
	std::cout << *robotForm << std::endl;
	std::cout << *presForm << std::endl;
	std::cout << std::endl;
	
	std::cout << PINK << "______SIGNATURE & EXECUTION_____" << END << std::endl;
	shForm->beSigned(Clara);
	robotForm->beSigned(Clara);
	presForm->beSigned(Clara);
	Clara.executeForm(*shForm);
	Clara.executeForm(*robotForm);
	Clara.executeForm(*presForm);

	delete	shForm;
	delete	robotForm;
	delete	presForm;
	delete	badForm;
	return (0);
}