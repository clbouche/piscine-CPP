/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 11:43:20 by claclou           #+#    #+#             */
/*   Updated: 2022/01/05 12:12:07 by clbouche         ###   ########.fr       */
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



	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

};


#endif