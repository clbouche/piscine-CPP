/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:07:30 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/01 11:34:15 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap(void);
	DiamondTrap(DiamondTrap const &src);
	DiamondTrap(std::string name);
	
	~DiamondTrap(void);
	
	DiamondTrap&	operator=(const DiamondTrap &other);

	void whoAmI(void); 
	void attack(std::string const & target);

};

#endif