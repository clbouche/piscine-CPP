/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:26:52 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 13:06:08 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
** CONSTRUCTORS
*/

Intern::Intern(void)
{
	return ;
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

/*
** OPERATORS
*/
Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

/*
** DESTRUCTOR
*/


Intern::~Intern(void)
{
	return ;
}

/*
** MEMBERS FUNCTIONS
*/

AForm	*Intern::makeForm(const std::string nameForm, const std::string targetForm)
{
	AForm	*ptr_form;

	ptr_form = NULL;
	
	std::string	names_forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm	*(*forms[3])( std::string const & targetForm) = {
		&ShrubberyCreationForm::create,
		&RobotomyRequestForm::create,
		&PresidentialPardonForm::create
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (names_forms[i] == nameForm)
		{
			std::cout << GREEN << "Intern creates " << nameForm << END << std::endl;
			return forms[i](targetForm);
		}
	}
	std::cerr << RED << "Maybe it's better to just bring the coffee." << END << std::endl;
	return (ptr_form);
}