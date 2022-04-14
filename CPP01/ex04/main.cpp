/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:59:17 by clbouche          #+#    #+#             */
/*   Updated: 2022/01/31 11:15:01 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>

int send_error(std::string error)
{
	std::cout << error << std::endl;
    return (EXIT_FAILURE);
}

std::string	create_newline(std::string buf, std::string to_find, std::string to_remplace)
{
	std::size_t	found = 0;
	while ((found = buf.find(to_find)) != std::string::npos)
	{
		buf.erase(found, to_find.length());
		buf.insert(found, to_remplace);
	};
	return (buf);
}

int main(int argc, char **argv)
{
	std::string		to_find;
	std::string		to_remplace;
	std::string		file_name;
	std::string		new_filename;
	std::string		buf;
	std::string		tmp;
	
	if (argc != 4)
		return (send_error("Invalid argument : ./replace [filename] [to_find] [to_remplace]"));
	file_name = argv[1];
	to_find = argv[2];
	to_remplace = argv[3];
	if (to_find.empty() || to_remplace.empty())
		return (send_error("Invalid argument : The strings must not be empty"));
	if (to_find.compare(to_remplace) == 0)
		return (send_error("Invalid argument : The strings must be differents"));
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
		return(send_error("File could not open"));
	new_filename = file_name;
	new_filename += ".replace";
	std::ofstream	ofs(new_filename.c_str());
	if(!ofs.is_open())
		return(send_error("Output file could not open"));
	while (getline(ifs, buf))
	{
		tmp = create_newline(buf, to_find, to_remplace);
		ofs << tmp << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
