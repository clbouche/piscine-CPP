/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:37:48 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/15 16:05:42 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <climits>
#include <stack>
#include <list>

# define RED "\x1B[31m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define PINK "\x1B[45;1m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define BLUE3 "\x1B[34;1m"
# define END "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
private:
	
public:
	MutantStack(void) {};
	MutantStack(const MutantStack<T> &src) { *this = src; }
	MutantStack<T> &operator=(const MutantStack<T> &src) {
		this->c = src.c;
		return (*this);
	}
	~MutantStack() {};

	typedef	typename	std::stack<T>::container_type::iterator	iterator;
	typedef	typename	std::stack<T>::container_type::const_iterator	const_iterator;
	typedef typename std::reverse_iterator<iterator> reverse_iterator;
	typedef typename std::reverse_iterator<const_iterator> const_reverse_iterator;

	iterator	begin() { return this->c.begin(); }
	iterator	end() { return this->c.end(); }

	const_iterator begin() const { return this->c.begin(); }
	const_iterator end() const { return this->c.end(); }

    reverse_iterator rbegin() {return this->c.rbegin(); }
    reverse_iterator rend() {return this->c.rend(); }

	const_reverse_iterator rbegin() const {return this->c.rbegin(); }
    const_reverse_iterator rend() const {return this->c.rend(); }
	
};



#endif