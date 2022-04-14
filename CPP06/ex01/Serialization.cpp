/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:37:54 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 14:29:52 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"


uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

std::ostream	&operator<<(std::ostream &flux, const Data &obj)
{
	flux << "\t" << BLUE1 << "nb : " << END << obj.nb << std::endl;
	flux << "ptr nb : " << obj.ptrNb << std::endl << std::endl;
	flux << "\t" << BLUE1 << "c : " << END << obj.c << std::endl;
	flux << "ptr c : " << obj.ptrC << std::endl << std::endl;
	flux << "\t" << BLUE1 << "str : " << END << obj.str << std::endl;
	flux << "ptr str : " << obj.ptrStr << std::endl << std::endl;
	return flux;
}

