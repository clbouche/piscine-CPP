/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:35:33 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/14 15:29:38 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


void	testList(void) {
	std::list<int>	lst1;
	
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);
	lst1.push_back(40);
	
	std::cout << BLUE1 << "The contents of lst1 are :";
	for (std::list<int>::iterator it = lst1.begin(); it != lst1.end(); it++) {
		std::cout << ' ' << *it;
	}
	std::cout << END << std::endl << std::endl;
	
	int		found1;
	try {
		found1 = 10;
		std::cout << "Try to find " << BLUE1 << found1 << END << std::endl;
		easyfind(lst1, found1);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		found1 = 12;
		std::cout << "Try to find " << BLUE1 << found1 << END << std::endl;
		easyfind(lst1, found1);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl;
}

void	testVector(void) {
	int	myints[] = {16, 2, 77, 29, 42, 18, 56, 24};
	std::vector<int>	vector1(myints, myints + sizeof(myints) / sizeof(int));

	std::cout << BLUE1 << "The contents of vector1 are :";
	for (std::vector<int>::iterator it = vector1.begin(); it != vector1.end(); it++) {
		std::cout << ' ' << *it;
	}
	std::cout << END << std::endl << std::endl;
	int		found2;

	try {
		found2 = 42;
		std::cout << "Try to find " << BLUE1 << found2 << END << std::endl;
		easyfind(vector1, found2);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
		try {
		found2 = 22;
		std::cout << "Try to find " << BLUE1 << found2 << END << std::endl;
		easyfind(vector1, found2);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
}

int main(void)
{
	testList();
	testVector();
	return 0;
}

