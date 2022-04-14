/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:27:15 by claclou           #+#    #+#             */
/*   Updated: 2022/01/18 11:11:02 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_inventory[4];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &src);
	
	virtual ~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &other);

	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};

#endif