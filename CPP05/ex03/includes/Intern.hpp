/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:26:28 by claclou           #+#    #+#             */
/*   Updated: 2022/01/20 13:41:14 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include <string>

class	AForm; 

class Intern
{
public:
	Intern(void);
	Intern(const Intern &src);

	Intern	&operator=(const Intern &other);
	
	~Intern();

	AForm	*makeForm(const std::string nameForm, const std::string targetForm);
};

#endif
