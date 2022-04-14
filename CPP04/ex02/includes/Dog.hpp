/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:48:42 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 11:51:48 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class Dog : public Animal
{

private:
	Brain	*_brain;
	
public:
	Dog(void);
	Dog(const Dog &src);

	Dog	operator=(const Dog &other);

	virtual ~Dog();

	void	makeSound() const;
	Brain	*getBrain( void ) const;
};

#endif
