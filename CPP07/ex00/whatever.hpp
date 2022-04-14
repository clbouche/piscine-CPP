/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:42:56 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 16:20:26 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

template<typename T>
T const &	max(T const &x, T const &y) {
	return (x > y ? x : y);
}

template<typename T>
T const &	min(T const &x, T const &y) {
	return (x < y ? x : y);
}

template<typename T>
void	swap(T &x, T &y) {
	T save;

	save = y;
	y = x;
	x = save;
}

class	whatever {

public :
	class	ImpossibleOperation : public std::exception
		{
			public : 
				virtual const char *what() const throw() { return ("./whatever [first info] [second info]. I need 2 informations of the same type bro"); }
		};

};


#endif