/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:08:08 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/27 12:08:16 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
protected:

public:
	WrongCat(void);
	WrongCat(const WrongCat &src);

	WrongCat	operator=(const WrongCat &other);

	~WrongCat();

	void	makeSound() const;
};

#endif