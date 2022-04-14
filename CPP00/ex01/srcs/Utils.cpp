/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:50:12 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 09:49:42 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Phonebook.hpp"
# include "Utils.hpp"
# include <iomanip>

std::string resize_info(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

void	print_info(std::string info)
{
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << resize_info(info);
}

// int to_int(char const *s)
// {
// 	bool	negate;
// 	int		result;

// 	negate = (s[0] == '-');
// 	if ( *s == '+' || *s == '-' ) 
// 		++s;
// 	result = 0;
// 	while(*s)
// 	{
// 		result = result * 10  - (*s - '0');
// 		++s;
// 	}
// 	return negate ? result : -result;
// } 

int to_int(char const *s)
{
	bool	negate;
	int		result;
	
	if ( s == NULL || *s == '\0' )
	{
		std::cerr << "Please enter the index number of the contact to print" << std::endl;
		return (-1);
	}
	negate = (s[0] == '-');
	if ( *s == '+' || *s == '-' ) 
		++s;

	if ( *s == '\0')
	{
		std::cerr << "Please enter the index number of the contact to print" << std::endl;
		return (-1);
	}
	result = 0;
	while(*s)
	{
		if ( *s < '0' || *s > '9' )
		{
			std::cerr << "Please enter the index number of the contact to print" << std::endl;
			return (-1);
		}
		result = result * 10  - (*s - '0');
		++s;
	}
	return negate ? result : -result;
} 

int ft_stoi(std::string s)
{
	int i;
	
	if (isdigit(s[0]))
			i = to_int(s.c_str());
	else 
		return (-1);
    return (i);
}

