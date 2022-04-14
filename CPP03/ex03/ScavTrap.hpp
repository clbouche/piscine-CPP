/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 10:38:36 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/01 11:25:31 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(ScavTrap const &src);
	ScavTrap(std::string name);
	
	~ScavTrap(void);
	
	ScavTrap&	operator=(const ScavTrap &other);

	void guardGate(void);
	void attack(std::string const & target);

};

#endif