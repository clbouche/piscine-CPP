/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:38:41 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 12:05:49 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** CONSTRUCTORS
*/

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("undefined_shrubbery", 145, 137)
{
	return ;
}


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target + "_shrubbery", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	*this = src;
}

/*
** OPERATORS
*/

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->_target = other._target;
	return (*this);
}

/*
** DESTRUCTOR
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}


/*
** MEMBERS FUNCTIONS
*/

AForm	*ShrubberyCreationForm::create(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

bool		ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	try
	{	
		if (this->checkSignature(executor) == true)
		{
			
			std::ofstream	file(this->getName().c_str(), std::ofstream::out);
			if (file.is_open())
			{
				file	<< "                                                    .     " << std::endl
						<< "                                         .         ;      " << std::endl
						<< "            .              .              ;%     ;;       " << std::endl
						<< "              ,           ,                :;%  %;        " << std::endl
						<< "               :         ;                   :;%;'     ., " << std::endl
						<< "      ,.        %;     %;            ;        %;'    ,;   " << std::endl
						<< "        ;       ;%;  %%;        ,     %;    ;%;    ,%'    " << std::endl
						<< "         %;       %;%;      ,  ;       %;  ;%;   ,%;'     " << std::endl
						<< "          ;%;      %;        ;%;        % ;%;  ,%;'       " << std::endl
						<< "           `%;.     ;%;     %;'         `;%%;.%;'         " << std::endl
						<< "            `:;%.    ;%%. %@;        %; ;@%;%'            " << std::endl
						<< "               `:%;.  :;bd%;          %;@%;'              " << std::endl
						<< "                 `@%:.  :;%.         ;@@%;'               " << std::endl
						<< "                   `@%.  `;@%.      ;@@%;                 " << std::endl
						<< "                     `@%%. `@%%    ;@@%;                  " << std::endl
						<< "                       ;@%. :@%%  %@@%;                   " << std::endl
						<< "                         %@bd%%%bd%%:;                    " << std::endl
						<< "                           #@%%%%%:;;                     " << std::endl
						<< "                           %@@%%%::;                      " << std::endl
						<< "                           %@@@%(o);  . '                 " << std::endl
						<< "                           %@@@o%;:(.,'                   " << std::endl
						<< "                       `.. %@@@o%::;                      " << std::endl
						<< "                          `)@@@o%::;                      " << std::endl
						<< "                           %@@(o)::;                      " << std::endl
						<< "                          .%@@@@%::;                      " << std::endl
						<< "                          ;%@@@@%::;.                     " << std::endl
						<< "                         ;%@@@@%%:;;;.                    " << std::endl
						<< "                     ...;%@@@@@%%:;;;;,..                 " << std::endl;
				file.close();
				return (true);
			}
		}
	}
	catch(const AForm::cannotSigned& e)
	{
		std::cerr << e.what() << '\n';
		return (false);
	}
	return (true);
}
