/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:36:39 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/15 15:29:15 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void	testSubject(void)
	{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	std::cout << "longest span : " << sp.longestSpan() << std::endl;
}

void	testSmall(void)
{
	Span sp = Span(2);
	std::cout << PURPLE << "EMPTY SPAN" << END << std::endl;
	try	{
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "longest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << PURPLE << "1 ELEM SPAN" << END << std::endl;
	sp.addNumber(6);
	try	{
		std::cout << "shortest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try	{
		std::cout << "longest span : " << sp.shortestSpan() << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

int	randomNb () { 
	srand(time(NULL));
	return (std::rand() % 10000);
};

void	testBig(void) {

	Span sp = Span(10000);
	std::vector<int>::iterator it;
	std::vector<int>::iterator ite;
	std::vector<int> vec(10001, 42);
	try{
		sp.addNumbers(vec.begin(), vec.end());
		sp.addNumber(10);
	} catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	try{
		std::cout << "Shortest span = " <<  sp.shortestSpan() << std::endl;
		std::cout << "Longest span = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
	std::cout << PINK << "__________SUBJECT_________ " << END << std::endl;
	testSubject();
	std::cout << std::endl;

	std::cout << PINK << "__________SMALL_________ " << END << std::endl;
	testSmall();
	std::cout << std::endl;

	std::cout << PINK << "__________BIG_________ " << END << std::endl;
	testBig();
	std::cout << std::endl;
	
	return (0);
}