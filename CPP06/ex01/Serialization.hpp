/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:14:59 by clbouche          #+#    #+#             */
/*   Updated: 2022/02/09 14:25:17 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <stdint.h>
#include <iostream>

# define RED "\x1B[31m"
# define PINK "\x1B[45;1m"
# define GREEN "\x1B[32m"
# define YELLOW "\x1B[33m"
# define BLUE1 "\x1B[34m"
# define PURPLE "\x1B[35m"
# define BLUE2 "\x1B[36m"
# define END "\033[0m"


typedef struct s_Data
{
	int			nb;
	std::string	str;
	char		c;
	void	*ptrNb;
	void	*ptrStr;
	void	*ptrC;
}				Data;


uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream &flux, const Data &obj);

#endif /* *************************************************** SERIALIZATION_H */