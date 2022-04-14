/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 16:32:20 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 16:40:07 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T> void	printData(T const &data)
{
	std::cout << data << " ";
}

template<typename T>
void	iter(T const *array, int size, void func(const T &)) {
	for (int i = 0; i < size; i++)
		func(array[i]);	
}

#endif