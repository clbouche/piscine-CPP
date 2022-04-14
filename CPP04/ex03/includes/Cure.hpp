/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:05:54 by claclou           #+#    #+#             */
/*   Updated: 2022/01/18 10:13:19 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
protected: 
	
public:
	Cure(void);
	Cure(const Cure &src);
	
	virtual ~Cure();

	Cure	&operator=(const Cure &src);

	Cure* clone() const;
	void use(ICharacter& target);
};

#endif