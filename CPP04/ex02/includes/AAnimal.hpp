/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:25:30 by claclou           #+#    #+#             */
/*   Updated: 2022/01/14 14:27:05 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal(void);
	AAnimal(const AAnimal &src);
	AAnimal(const std::string &type);

	AAnimal	&operator=(const AAnimal &other);

	virtual ~AAnimal();

	virtual void	makeSound() const = 0;
	std::string		getType(void) const;
};

#endif