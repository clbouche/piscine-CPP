/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 09:48:34 by claclou           #+#    #+#             */
/*   Updated: 2022/02/07 11:15:21 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp" 
#include <string>
#include <ctime>
#include <cstdlib>

# define RED "\x1B[31m"
# define PINK "\x1B[45;1m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;

public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &src);

	RobotomyRequestForm&	operator=(const RobotomyRequestForm &other);

	bool	execute(const Bureaucrat &bureaucrat) const;

	virtual ~RobotomyRequestForm();
};

#endif 