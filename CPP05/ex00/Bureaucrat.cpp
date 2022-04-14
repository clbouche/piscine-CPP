/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:08:22 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 10:16:35 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
**	CONSTRUCTORS
*/ 

Bureaucrat::Bureaucrat(void)
{
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			_grade = grade;
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


Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName())
{
	*this = src;
	return ;
}

/*
**	DESTRUCTOR
*/ 

Bureaucrat::~Bureaucrat()
{
	return ;
}
	
/*
**	OPERATORS
*/ 

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		this->_grade = other.getGrade();
	return (*this);
}

std::ostream	&operator<<(std::ostream &flux, const Bureaucrat &src)
{
	flux << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
	return (flux);
}
	

/*
**	MEMBERS FUNCTIONS
*/ 
const std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::incrGrade(void)
{
	try
	{
		_grade--;
		if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
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

void		Bureaucrat::decrGrade(void)
{
	try
	{
		_grade++;
		if (_grade < 1)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
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