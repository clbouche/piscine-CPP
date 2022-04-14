/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:36:25 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/15 15:07:13 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** CONSTRUCTORS
*/
Span::Span(unsigned int N) : _maxSize(N), _stored(0){	
}

Span::Span(Span const &src)  {
	*this = src;
}

/*
** DESTRUCTOR
*/
Span::~Span() {
}

/*
** OPERATORS
*/
Span& Span::operator=(Span const & src) {
    if (this == &src)
        return *this;
    this->_data = src._data;
    this->_maxSize = src._maxSize;
    return *this;
}


/*
** MEMBERS FUNCTIONS
*/

void	Span::addNumber(const int newNb) {
	if (_stored >= _maxSize)
		throw StoredLimitException();
	_data.push_back(newNb);
	_stored++;
}

void    Span::addNumbers(vectIt it, vectIt ite) {
    while (it != ite)
    {
        addNumber(*it);
        it++;
    }
}

void	Span::tooSmall(void) const {
	if (this->_stored <= 1)
        throw TooSmallException();
}

unsigned int     Span::shortestSpan() const{
    tooSmall();
	std::vector<int> copy = this->_data;
    std::sort(copy.begin(), copy.end());
    unsigned int minDist = UINT_MAX;
    unsigned int tmpDist;
    std::vector<int>::iterator it;
    for (it = copy.begin(); it !=copy.end() - 1; it++)
    {
        tmpDist = abs(*it - *(it + 1));
        if (tmpDist < minDist)
            minDist = tmpDist;
    }
    return minDist;
}

unsigned int		Span::longestSpan() const {
	tooSmall();
	vectIt minIt = std::min_element(_data.begin(), _data.end());
	vectIt maxIt = std::max_element(_data.begin(), _data.end());
	return (*maxIt - *minIt);
}
