/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 10:00:38 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 12:11:08 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp" 
#include <string> 

# define RED "\x1B[31m"
# define PINK "\x1B[45;1m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class PresidentialPardonForm : public AForm
{
private:
	std::string	_target;

public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);

	PresidentialPardonForm&	operator=(const PresidentialPardonForm &other);

	bool	execute(const Bureaucrat &bureaucrat) const;
	static AForm	*create(std::string const & target);
	
	virtual ~PresidentialPardonForm();
};

#endif