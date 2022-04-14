/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:21:39 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 14:00:17 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
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

class Base { public : virtual ~Base(){}; };
class A : public Base {};
class B : public Base {};
class C : public Base {};


Base	*generate(void)
{
	Base	*instance = NULL;

	srand (time(NULL));

	int random = rand() % 3;
	if (random == 1) {
		instance = new A;
		std::cout << BLUE1 << "Instantiation of A. " << END << std::endl << std::endl;
	}
	else if (random == 2) {
		instance = new B;
		std::cout << BLUE2 << "Instantiation of B. " << END << std::endl << std::endl;
	}
	else {
		instance = new C;
		std::cout << PURPLE << "Instantiation of C. " << END << std::endl << std::endl;
	}
	return (instance);
}

void	identify(Base* p)
{
	std::cout << BLUE3 << "__Actual type of the object pointed to by p - pointer__" << END << std::endl << std::endl;
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << BLUE1 << "A" << END << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << BLUE2 << "B" << END << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << PURPLE << "C" << END << std::endl;
	else 
		std::cout << RED << "Undefined class" << std::endl;
}

void identify(Base& p)
{
	std::cout << BLUE3 << "__Actual type of the object pointed to by p - reference__" << END << std::endl << std::endl;
	try
	{
		A	a = dynamic_cast<A &>(p);
		std::cout << BLUE1 << "A" << END << std::endl;
	}
	catch(const std::exception& e) { }
	try
	{
		B	b = dynamic_cast<B &>(p);
		std::cout << BLUE2 << "B" << END << std::endl;
	}
	catch(const std::exception& e) { }
	try
	{
		C	c = dynamic_cast<C &>(p);
		std::cout << PURPLE << "C" << END << std::endl;
	}
	catch(const std::exception& e) { }
}

int main(void)
{
	
	Base	*base = generate();
	
	identify(base);
	identify(*base);
	delete base;
	return 0;
}