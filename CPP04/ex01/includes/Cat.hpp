/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:46:04 by claclou           #+#    #+#             */
/*   Updated: 2022/02/03 11:51:52 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

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

class Cat : public Animal
{
	
private:
	Brain	*_brain;

public:
	Cat(void);
	Cat(const Cat &src);

	Cat	operator=(const Cat &other);

	virtual ~Cat();

	void	makeSound() const;
	Brain	*getBrain( void ) const;
};

#endif
