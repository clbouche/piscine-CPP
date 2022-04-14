/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:03:44 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/02 14:11:04 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class ClapTrap
{
protected:

	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int	_attackDamage;

public:
	ClapTrap(void);
	ClapTrap(ClapTrap const &src);
	ClapTrap(std::string name);
	
	~ClapTrap(void);
	
	ClapTrap&	operator=(const ClapTrap &other);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string	const &		getName() const;
	int		getHitPoints() const;
	int		getEnergyPoints() const;
	int		getAttackDamage() const;	

};

#endif

