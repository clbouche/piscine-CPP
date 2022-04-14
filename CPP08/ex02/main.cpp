/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:37:23 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/15 16:18:00 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	testSubject(void) {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top : " <<mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " <<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void	testList(void)
{
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "top : " <<list.back() << std::endl;
	list.pop_back();
	std::cout << "size : " << list.size() << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator it = list.begin();
	std::list<int>::iterator ite = list.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
}

void	testIterators(void)
{
	std::cout << BLUE1 << "test reverse iterator" << END << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);

	std::cout << std::endl;
	std::cout << BLUE1 << "test const reverse iterator" << END << std::endl;
	MutantStack<int>::reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::reverse_iterator crite = mstack.rend();
	++crit;
	--crit;
	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		++crit;
	}
}

int main(void)
{
	std::cout << PINK << "__________SUBJECT_________ " << END << std::endl;
	testSubject();
	std::cout << std::endl;

	std::cout << PINK << "_____________LIST___________" << END << std::endl;
	testList();
	std::cout << std::endl;

	std::cout << PINK << "__________ITERATORS_________" << END << std::endl;
	testIterators();
	std::cout << std::endl;
	
	return 0;
}