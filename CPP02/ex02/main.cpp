/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 17:16:22 by claclou           #+#    #+#             */
/*   Updated: 2022/01/31 13:42:57 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void	testSubject(void) {
	std::cout << "____________________" << std::endl;
	std::cout << "TEST SUBJECT" << std::endl;
	std::cout << "____________________" << std::endl;

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
}

static void	testComparaison(void) {
	std::cout << "____________________" << std::endl;
	std::cout << "TEST COMPARAISONS" << std::endl;
	std::cout << "____________________" << std::endl;
	
	Fixed a;
	Fixed c(50);
	Fixed d(50);
	Fixed const b(5.05f);
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << c << std::endl;

	if (!(a < b))
		std::cout << "test if a is !(smaller than b). Goal : not print" <<  std::endl;
	if (a < b)
		std::cout << "test if a is smaller than b. Goal : print"<<  std::endl;
	if (!(a > b))
		std::cout << "test if a is !(bigger than b). Goal : print" <<  std::endl;
	if (a > b)
		std::cout << "test if a is bigger than b. Goal : not print"<<  std::endl;
	if (!(a >= c))
		std::cout << "test if a is !(bigger or equal than c). Goal : print"<<  std::endl;
	if (a >= c)
		std::cout << "test if a is bigger or equal than c. Goal : not print"<<  std::endl;
	if (!(a <= c))
		std::cout << "test if a is !(smaller or equal than c). Goal : not print"<<  std::endl;
	if (a <= c)
		std::cout << "test if a is smaller or equal than c. Goal : print"<<  std::endl;
	if (!(a >= c))
		std::cout << "test if a is !(bigger or equal than c). Goal : print"<<  std::endl;
	if (a >= c)
		std::cout << "test if c is bigger or equal than d. Goal : not print"<<  std::endl;
	if (!(c >= d))
		std::cout << "test if c is !(bigger or equal than d). Goal : not print"<<  std::endl;
	if (c >= d)
		std::cout << "test if a is bigger or equal than c. Goal : print"<<  std::endl;
	if (!(c == d))
		std::cout << "test if c is !(equal than d). Goal : not print"<<  std::endl;
	if (c == d)
		std::cout << "test if c is equal than d. Goal : print"<<  std::endl;
	if (!(c != d))
		std::cout << "test if c is !(different than d). Goal : print"<<  std::endl;
	if (c != d)
		std::cout << "test if c is different than d. Goal : not print"<<  std::endl;
}

static void	testArithmetic(void)
{
	std::cout << "____________________" << std::endl;
	std::cout << "TEST ARTHMETIC " << std::endl;
	std::cout << "____________________" << std::endl;
	
	Fixed   a(6.95f);
	Fixed   b(7);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	std::cout << "  a + b = " << a + b << std::endl;
	std::cout << "  a + a = " << a + a << std::endl;
	std::cout << "  a - b = " << a - b << std::endl;
	std::cout << "  a * b = " << a * b << std::endl;
	std::cout << "  a / b = " << a / b << std::endl;
}

static void	test_Crement(void){
	
	std::cout << "____________________" << std::endl;
	std::cout << "TEST CREMENT " << std::endl;
	std::cout << "____________________" << std::endl;
	
	Fixed a;
	Fixed b(5.05f);
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	std::cout << "CHECK _CREMENTATION FOR INT : " << std::endl;
	std::cout << "a after ++a : ";
	std::cout << ++a << std::endl;
	std::cout << "a after ++a : ";
	std::cout << ++a << std::endl;
	std::cout << "a after --a : ";
	std::cout << --a << std::endl;
	
	std::cout << "CHECK _CREMENTATION FOR FLOAT : " << std::endl;
	std::cout << "b after ++b : ";
	std::cout << ++b << std::endl;
	std::cout << "b after ++b : ";
	std::cout << ++b << std::endl;
	std::cout << "b after --b : ";
	std::cout << --b << std::endl;
}

static void	test_MinMax(void)
{
	std::cout << "____________________" << std::endl;
	std::cout << "TEST MAX & MIN " << std::endl;
	std::cout << "____________________" << std::endl;
	
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	std::cout << "max between a and b is : ";
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "min between a and b is : ";
	std::cout << Fixed::min(a, b) << std::endl;
}

int main(void)
{
	testSubject();
	std::cout << std::endl;
	testComparaison();
	std::cout << std::endl;
	testArithmetic();
	std::cout << std::endl;
	test_Crement();
	std::cout << std::endl;
	test_MinMax();
	
	return 0;
}
