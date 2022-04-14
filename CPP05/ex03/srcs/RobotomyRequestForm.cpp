/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:52:15 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 12:08:01 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** CONSTRUCTORS
*/

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobototyRequest", 72, 45), _target("undefined")
{
	return ;
}


RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobototyRequest", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	*this = src;
}

/*
** OPERATORS
*/

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

/*
** DESTRUCTOR
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}


/*
** MEMBERS FUNCTIONS
*/

AForm	*RobotomyRequestForm::create(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

bool		RobotomyRequestForm::execute(const Bureaucrat &executor) const
{	
	int	robotized;
	
	try
	{
		if (this->checkSignature(executor) == true)
		{
			std::cout << "Brrrrrrrrrrrrrr" << std::endl;
			std::srand(std::time(NULL));
			robotized = rand() % 2;
			if (robotized == 1)	
				std::cout << GREEN << this->_target << " has been robotimized." << END << std::endl;
			else
				std::cout << RED<< "The operation failed" << END << std::endl;			
		}
	}
	catch(const AForm::cannotSigned& e)
	{
		std::cerr << e.what() << '\n';
		return (false);
	}
	return (true);
}
