/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:32:07 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/10 15:27:27 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// class	Awesome
// {
// 	public:
// 	Awesome( void) : _n(42) {return ;}
// 	int get(void ) const { return this->_n;}
// 	private:
// 	int _n;
// };

// std::ostream &operator<<(std::ostream &o, Awesome const &rhs) { o << rhs.get(); return o;}
// template<typename T>
// void print(T const & x) { std::cout << x << std::endl; return ;}

// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4}; 
// 	Awesome tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return (0);
// }

int main() {
	int			arrayInt[6] = {0, 1, 2, 3, 4, 5};
	std::string	arrayStr[5] = {"Clara", "Martin", "Theo", "Mathilde", "Norminet"};
	char		arrayCh[4] = {'a', 'b', 'c', 'd'};

	iter(arrayInt, 6, printData);
	std::cout << std::endl;

	iter(arrayStr, 5, printData);
	std::cout << std::endl;

	iter(arrayCh, 4, printData);
	std::cout << std::endl;

	return (0);
}
