/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:08:22 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 10:29:15 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
**	CONSTRUCTORS
*/ 

Bureaucrat::Bureaucrat(void) :_name("undefined"), _grade(12) //remplacer grade par une valeur au hasard
{
	return ;
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
		{
			_grade = grade;
			std::cout << "Yeeah 🎉 " << name << ", new Bureaucrat grade " << grade << " !" << std::endl;
		}
	}
	catch(GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooHighException e)
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

void		Bureaucrat::signForm(Form &form) const 
{
	try
	{
		if (form.beSigned(*this) == true)
			std::cout << GREEN << this->getName() << " signs " << form.getName() << END << std::endl;
		else
			throw GradeTooLowException();
	}
	catch(GradeTooLowException& e)
	{
		std::cout << RED << this->_name << " cannot sign " << form.getName() <<  " because " << e.what() << END << std::endl;
	}
}

/* 
**		Getter 
*/
const std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

/*
**		others
*/

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
	catch(GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooHighException e)
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
	catch(GradeTooLowException e)
	{
		std::cerr << e.what() << '\n';
	}
	catch(GradeTooHighException e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}
