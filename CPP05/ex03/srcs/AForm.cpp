/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:19:27 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 11:25:55 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/*
**	CONSTRUCTORS
*/
AForm::AForm(void) : _name("undefined"), _signedGrade(12), _execGrade(23), _signed(false)
{
	return ;
}

AForm::AForm(std::string name, int signedGrade, int execGrade) : _name(name), _signedGrade(signedGrade), _execGrade(execGrade), _signed(false)
{
	try
	{
		checkGrade(signedGrade, execGrade);
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return ;
	
}

AForm::AForm(const AForm &src) : _signedGrade(src._signedGrade), _execGrade(src._execGrade)
{
	*this = src;
}

/*
**	DESTRUCTOR
*/ 
AForm::~AForm()
{
	return ;
}

/*
**	OPERATORS
*/ 

AForm	&AForm::operator=(const AForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &flux, const AForm &form)
{
	flux << PURPLE << "Form [" << form.getName() << "]" << END << std::endl;
	flux << "\t" << "➡️ Signed grade : " << form.getSigned();
	flux << ". Exec grade : " << form.getExecgrade() << std::endl;
	return (flux);
};

/*
**	MEMBERS FUNCTIONS
*/ 
const std::string	AForm::getName(void) const
{
	return _name;
}

int		AForm::getSignedgrade(void) const
{
	return _signedGrade;
}

int		AForm::getExecgrade(void) const
{
	return _execGrade;
}
bool	AForm::getSigned(void) const
{
	return _signed;
}

bool	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _signedGrade)
		return (false);
	else
		_signed = true;
	return (true);
}

void	AForm::checkGrade(int signedGrade, int execGrade)
{
		if (signedGrade < 1 || execGrade < 1)
			throw GradeTooHighException();
		else if (signedGrade > 150 || execGrade > 150)
			throw GradeTooLowException();

}

bool	AForm::checkSignature(const Bureaucrat &executor) const
{
	if (this->_signed == false || executor.getGrade() > this->_execGrade)
		throw cannotSigned();
	return (true);
}
