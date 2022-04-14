/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:44:36 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 13:34:26 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	Animal(const Animal &src);
	Animal(const std::string &type);

	Animal	&operator=(const Animal &other);

	virtual ~Animal();

	virtual void	makeSound() const = 0;
	std::string		getType(void) const;
};

#endif