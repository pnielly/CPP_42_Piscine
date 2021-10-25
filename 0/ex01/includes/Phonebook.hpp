/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 19:28:52 by user42            #+#    #+#             */
/*   Updated: 2021/07/24 13:30:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "Contact.hpp"

# define EXIT "EXIT"
# define ADD "ADD"
# define SEARCH "SEARCH"

class Phonebook
{
	private :
	Contact		_contacts[8];
	int		_contact_count = 0;

	public :
	void	update(Contact &contact);
	int	getCountContacts() const;
	Contact getContact(int i) const;
};

#endif
