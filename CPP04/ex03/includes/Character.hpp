/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: claclou <claclou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:10:03 by claclou           #+#    #+#             */
/*   Updated: 2022/01/18 10:23:09 by claclou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
private:
	AMateria	*_inventory[4];
	std::string	_name;
public:
	Character(void);
	Character(const Character &src);
	Character(std::string name);

	virtual ~Character();

	Character	&operator=(Character const &other);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
}; 

#endif