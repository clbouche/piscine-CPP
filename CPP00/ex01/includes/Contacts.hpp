/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 11:37:44 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 09:45:59 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Contacts
{
private:
	std::string _firstname;
	std::string	_lastname;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret; 

public:
	//changer en private
	//et rajouter des fonctions getter pour chaque info pour pouvoir les utiliser

	Contacts( void );
	~Contacts( void );

	void	create_contact(void);
	void	print_contact(void) const;

	std::string	get_firstname()		const;
	std::string	get_lastname()		const;
	std::string	get_nickname()		const;
	std::string	get_number()		const;
	std::string	get_secret()		const;
};




#endif