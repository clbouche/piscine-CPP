/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:36:45 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/03 11:00:05 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const	WrongAnimal* f = new WrongCat();
	
	std::cout << "type : " << j->getType() << " " << std::endl;
	std::cout << "type : " << i->getType() << " " << std::endl;
	std::cout << "type : " << f->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //dog sound
	meta->makeSound(); //undefined 
	f->makeSound(); //wrong animal sound

	delete meta;
	delete j;
	delete i; 
	delete f;
	return 0;
}