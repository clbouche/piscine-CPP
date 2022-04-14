/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:54:55 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 11:20:29 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "AForm.hpp"

# define RED "\x1B[31m"
# define PINK "\x1B[45;1m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class	AForm;

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

	void		signForm(AForm &form) const;
	void		executeForm(AForm &form) const;

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