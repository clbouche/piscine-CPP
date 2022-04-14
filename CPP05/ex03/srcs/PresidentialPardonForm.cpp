/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:01:37 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 12:09:09 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** CONSTRUCTORS
*/

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("ShrubberyForm", 145, 137), _target("undefined")
{
	return ;
}


PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("ShrubberyForm", 145, 137), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

/*
** OPERATORS
*/

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

/*
** DESTRUCTOR
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}


/*
** MEMBERS FUNCTIONS
*/

AForm	*PresidentialPardonForm::create(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

bool		PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	try
	{
		if (this->checkSignature(executor) == true)
			std::cout << GREEN << this->_target << " was excused by Zafod Beeblebrox." << END << std::endl;
	}
	catch(const AForm::cannotSigned& e)
	{
		std::cerr << e.what() << '\n';
		return (false);
	}
	return (true);
}
