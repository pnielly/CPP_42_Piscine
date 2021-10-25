/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:23:35 by user42            #+#    #+#             */
/*   Updated: 2021/07/24 13:30:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"
#include "../includes/Contact.hpp"

/**
** Phonebook::updaate() : adds the new contact
** in the database and increments _contact_count.
**/

void	Phonebook::update(Contact &contact)
{
	_contacts[_contact_count++] = contact;
	return ;
}

int	Phonebook::getCountContacts() const
{
	return _contact_count;
}

Contact	Phonebook::getContact(int i) const
{
	return _contacts[i];
}
