/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 08:34:17 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 10:49:47 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp" 
#include <string> 
#include <fstream>
#include <iostream>

class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;

public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src);

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &other);

	bool	execute(const Bureaucrat &bureaucrat) const;
	
	virtual ~ShrubberyCreationForm();
};

#endif 