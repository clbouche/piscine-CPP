/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:19:00 by claclou           #+#    #+#             */
/*   Updated: 2022/01/12 14:19:03 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal(const std::string &type);

	WrongAnimal	operator=(const WrongAnimal &other);

	~WrongAnimal();

	void	makeSound() const;
	std::string		getType(void) const;
};

#endif
