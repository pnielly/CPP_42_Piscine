/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 23:23:49 by user42            #+#    #+#             */
/*   Updated: 2021/07/24 13:27:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Phonebook.hpp"
#include "../includes/Contact.hpp"

std::string	formatting(std::string &str)
{
	if (str.length() <= 10)
		return str;
	else
	{
		std::string str2 = str.substr(0, 10);
		str2[9] = '.';
		return str2;
	}
}

void	Contact::display_table(int i, int count)
{
	if (!i)
	{
		for (int j = 0; j <= 44; j++)
			std::cout << '-';
		std::cout << std::endl;
		std::cout << '|' << std::setfill (' ') << std::setw (10) << "Index";
		std::cout << '|' << std::setfill (' ') << std::setw (10) << "First Name";
		std::cout << '|' << std::setfill (' ') << std::setw (10) << "Last Name";
		std::cout << '|' << std::setfill (' ') << std::setw (10) << "Nickname" << '|' << std::endl;
		for (int j = 0; j <= 44; j++)
			std::cout << '-';
		std::cout << std::endl;
	}
	std::cout << '|' << std::setfill (' ') << std::setw (10) << i;
	std::cout << '|' << std::setfill (' ') << std::setw (10) << formatting(_first_name);
	std::cout << '|' << std::setfill (' ') << std::setw (10) << formatting(_last_name);
	std::cout << '|' << std::setfill (' ') << std::setw (10) << formatting(_nickname) << '|' << std::endl;
	if (i == count - 1)
	{
		for (int j = 0; j <= 44; j++)
			std::cout << '-';
		std::cout << std::endl;
	}
}

void	Contact::displayContact() const
{
	std::cout << std::endl;
	std::cout << "first name: ";
	std::cout << _first_name << std::endl;
	std::cout << "last name: ";
	std::cout << _last_name << std::endl;
	std::cout << "nickname: ";
	std::cout << _nickname << std::endl;
	std::cout << "phone number: ";
	std::cout << _phone_number << std::endl;
	std::cout << "darkest secret: ";
	std::cout << _darkest_secret << std::endl;
}
