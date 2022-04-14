/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:53:38 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/10 15:00:53 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iomanip>

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
class Array
{
private:
	T				*_array;
	unsigned int	_size;

public:
	//constructor with no parameter
	Array(void) : _array(0), _size(0) { }

	//constructor with size
	Array(unsigned int n) : _array(new T[n]), _size(n) {
	for (unsigned int i = 0; i < _size; i++)
		this->_array[i] = 0;
	};

	//constructor by copy - deep copy
	Array(const Array<T> &src) {
		_array = NULL;
		operator=(src);
	}
	
	//assignment operator - deep copy
	Array<T>	&operator=(const Array<T> &other) {
		this->_size = other._size;
		if (other._size > this->_size)
			throw ImpossibleAssignationException();
		if(this->_array != NULL)
			delete[] this->_array;
		this->_array = new T[this->_size];
			for (unsigned int i = 0; i < _size; i++)
				this->_array[i] = other._array[i];
		return *this; 
	}

	//assignment operator for index
	T	&operator[](unsigned int i) {
		if (i >= this->_size)
			throw ImpossibleIndexException();
		return (this->_array[i]);
	};
	
	// member function
	unsigned int	size(void) const {
		return (this->_size);
	};

	//destructor
	~Array(void) {
		delete [] this->_array;
	};

	//exceptions
	class ImpossibleIndexException : public std::exception {
		const char	*what() const throw() {
			return ("impossible index");
		};
	};

	class ImpossibleAssignationException : public std::exception {
		const char	*what() const throw() {
			return ("impossible assignation");
		};
	};
};


#endif
