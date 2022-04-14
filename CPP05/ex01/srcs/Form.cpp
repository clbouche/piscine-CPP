/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:19:27 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 10:29:33 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


/*
**	CONSTRUCTORS
*/
Form::Form(void) : _name("undefined"), _signedGrade(12), _execGrade(23), _signed(false)
{
	return ;
}

Form::Form(std::string name, int signedGrade, int execGrade) : _name(name), _signedGrade(signedGrade), _execGrade(execGrade), _signed(false)
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

Form::Form(const Form &src) : _signedGrade(src._signedGrade), _execGrade(src._execGrade)
{
	*this = src;
}

/*
**	DESTRUCTOR
*/ 
Form::~Form()
{
	return ;
}

/*
**	OPERATORS
*/ 

Form	&Form::operator=(const Form &other)
{
	//if (this != other)
		_signed = other._signed;
	return (*this);
}

std::ostream	&operator<<(std::ostream &flux, const Form &form)
{
	flux << PURPLE << "Form [" << form.getName() << "]" << END << std::endl;
	flux << "\t" << "➡️ Signed grade : " << form.getSigned();
	flux << ". Exec grade : " << form.getExecgrade() << std::endl;
	return (flux);
};

/*
**	MEMBERS FUNCTIONS
*/ 
const std::string	Form::getName(void) const
{
	return _name;
}

int		Form::getSignedgrade(void) const
{
	return _signedGrade;
}

int		Form::getExecgrade(void) const
{
	return _execGrade;
}
bool	Form::getSigned(void) const
{
	return _signed;
}

bool	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() >= _signedGrade)
		return (false);
	else
		_signed = true;
	return (true);
}

void	Form::checkGrade(int signedGrade, int execGrade)
{
		if (signedGrade < 1 || execGrade < 1)
			throw GradeTooHighException();
		else if (signedGrade > 150 || execGrade > 150)
			throw GradeTooLowException();
}