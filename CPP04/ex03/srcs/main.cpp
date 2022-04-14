/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:26:21 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/04 14:47:15 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter	*me = new Character("me");
	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter	*bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	me->use(3, *me);
	me->use(42, *me);
	me->use(-42, *bob);
	me->unequip(1);
	delete tmp;
	me->use(0, *bob);

	delete bob;
	delete me;
	std::cout << std::endl;

	Character	cloud;
	cloud.equip(src->createMateria("ice"));
	cloud.equip(src->createMateria("fire"));
	cloud.equip(src->createMateria("cure"));
	{
		Character	cloud2(cloud);
		cloud2.use(0, cloud);
		cloud2.use(1, cloud);
	}
	cloud.use(0, cloud);
	cloud.use(1, cloud);
	delete src;
	return (EXIT_SUCCESS);
}