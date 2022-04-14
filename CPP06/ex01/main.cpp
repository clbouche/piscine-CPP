/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:11:30 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 14:24:43 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main(void)
{
	Data		data;

	data.nb = 42;
	data.c = 'c';
	data.str = "bonjour";
	data.ptrNb = &data.nb;
	data.ptrC = &data.c;
	data.ptrStr = &data.str;
	std::cout << BLUE2 << "______________DATA______________" << END << std::endl;
	std::cout << data << std::endl;

	uintptr_t	serial = serialize(&data);
	
	Data		deserial = *deserialize(serial);
	std::cout << BLUE2 << "______________DATA COPY______________" << END << std::endl;
	std::cout << deserial << std::endl;
	return 0;
}