/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 11:29:35 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/02 12:17:48 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[94m"
# define END "\033[0m"

class FragTrap : virtual public ClapTrap
{
private:
	
public:
	FragTrap(void);
	FragTrap(FragTrap const &src);
	FragTrap(std::string name);
	
	~FragTrap(void);
	
	FragTrap&	operator=(const FragTrap &other);

	void highFivesGuys(void);
	void attack(std::string const & target);
	
};


#endif