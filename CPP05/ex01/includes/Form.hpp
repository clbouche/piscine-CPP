/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 15:11:21 by claclou           #+#    #+#             */
/*   Updated: 2022/01/20 11:19:22 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <stdexcept>
#include <cstdlib>
#include "Bureaucrat.hpp"

# define RED "\x1B[31m"
# define PINK "\x1B[45;1m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class Bureaucrat;

class Form
{
private:
	std::string	const _name;
	int			const _signedGrade;
	int			const _execGrade;
	bool		_signed;
	
public:
	Form(void);
	Form(std::string name, int signedGrade, int execGrade);
	Form(const Form &src);

	Form	&operator=(const Form &other);
	
	virtual ~Form();
	
	const std::string	getName(void) const;
	int		getSignedgrade(void) const;
	int		getExecgrade(void) const;
	bool	getSigned(void) const;

	void	checkGrade(int signedGrade, int execGrade);
	bool	beSigned(Bureaucrat const &bureaucrat);
	// virtual bool		checkSignature(const Bureaucrat &executor) const;
	// virtual bool		execute(const Bureaucrat &executor) const;

	class	GradeTooHighException : public std::exception
	{
		public : 
			virtual const char *what() const throw() { return ("Grade too high - Form"); }
	};

	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw() { return ("Grade too low - Form "); }
	};

	class cannotSigned : public std::exception
	{
		public :
			virtual const char *what() const throw() { return ("The form canot be signed, Sorry!"); }
	};
	
};

std::ostream	&operator<<(std::ostream &flux, const Form &src);

#endif