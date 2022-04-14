/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 11:48:54 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/05 14:51:00 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 
 
#include <iostream>

class Zombie
{
private:
	std::string _name;
	
public:
	void		announce(void) const;
	void 		setName(std::string name);

	Zombie(std::string name);
	~Zombie(void);
	Zombie(void);

};

#endif