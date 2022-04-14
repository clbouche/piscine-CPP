/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:35:07 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/14 15:19:05 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string> 
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

# define RED "\x1B[31m"
# define PINK "\x1B[45;1m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"

class	NotFoundException : public std::exception {
	public:
	virtual const char *what() const throw() {
		return ("Element not found in array");
	}
};

template<typename T>
void	easyfind(T array, int value ) {
	typename T::iterator it;
	it = std::find(array.begin(), array.end(), value);
	if (it == array.end())
		throw	NotFoundException();
	else
		std::cout << "Element found in array : " << BLUE1 << *it << END << std::endl;
}


#endif