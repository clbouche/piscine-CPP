/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:09:58 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/03 12:02:49 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	Brain(const Brain &src);

	Brain	operator=(const Brain &other);
	
	~Brain();

	std::string const	&getIdea(int index) const;
};


#endif