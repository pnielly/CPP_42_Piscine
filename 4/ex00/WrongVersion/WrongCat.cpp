/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 17:14:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat created" << std::endl;
}

// Destructor
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

// Copy
WrongCat::WrongCat(const WrongCat& op)
{
	this->_type = op._type;
	std::cout << "WrongCat copied" << std::endl;
}

// Assignment operator overload
WrongCat & WrongCat::operator=(const WrongCat& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string WrongCat::getType() const
{
	return (this->_type);
}
