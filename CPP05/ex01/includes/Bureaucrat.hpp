/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:54:55 by claclou           #+#    #+#             */
/*   Updated: 2022/01/19 15:53:13 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "Form.hpp"

class	Form;

class Bureaucrat
{
private:
	std::string const _name;
	int		_grade;
public:
	Bureaucrat(void);
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);

	Bureaucrat	&operator=(const Bureaucrat &other);
	
	virtual ~Bureaucrat();

	const std::string	getName(void) const;
	int		getGrade(void) const;

	void		incrGrade(void);
	void		decrGrade(void);
	
	void		signForm(Form &form) const;

	class	GradeTooHighException : public std::exception
	{
		public : 
			virtual const char *what() const throw() { return ("Grade too high - Bureaucrat"); }
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw() { return ("Grade too low - Bureaucrat"); }
	};
	
};

std::ostream	&operator<<(std::ostream &flux, const Bureaucrat &src);

#endif