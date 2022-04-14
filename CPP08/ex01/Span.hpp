/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:36:07 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/15 15:07:34 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP 

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <climits>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

typedef std::vector<int>::const_iterator vectIt;

class Span
{
private:
	unsigned int	_maxSize;
	unsigned int	_stored;
	std::vector<int>	_data;
	Span(void);
	
public:
	//constructors 
	Span(const unsigned int N);
	Span(Span const &src);
	Span& operator=(Span const & src);
	
	//destructor
	~Span();

	//members functions
	void	addNumber(const int newNb);
	void	addNumbers(vectIt it, vectIt ite);
	unsigned int		shortestSpan() const;
	unsigned int		longestSpan() const;
	void	tooSmall(void) const;

	//exceptions
	class	StoredLimitException : public std::exception {
	public:
		virtual const char *what() const throw() { 
			return ("The limit of numbers that can be stored has been reached.");
		}
	};

	class	TooSmallException : public std::exception {
	public:
		virtual const char *what() const throw() { 
			return ("There are no numbers stored, or only one : no span can be found.");
		}
	};
};


#endif