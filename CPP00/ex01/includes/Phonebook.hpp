/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clbouche <clbouche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:32:55 by claclou           #+#    #+#             */
/*   Updated: 2022/01/28 09:49:31 by clbouche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

class Phonebook {

private:
	Contacts	_contacts[8];
	static int	_contacts_set;
	
public:
	Phonebook( void ); //constructor
	~Phonebook( void ); //destructor

	void	search_contact(void) const;
	int		check_index(void) const;
	void	add_contact(void);
	void	print_contact(int index) const;
	void	print_tab(void) const;

};


#endif