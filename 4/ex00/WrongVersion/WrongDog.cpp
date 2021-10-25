/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 17:15:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongDog::WrongDog()
{
	this->_type = "WrongDog";
	std::cout << "WrongDog created" << std::endl;
}

// Destructor
WrongDog::~WrongDog()
{
	std::cout << "WrongDog destroyed" << std::endl;
}

// Copy
WrongDog::WrongDog(const WrongDog& op)
{
	this->_type = op._type;
	std::cout << "WrongDog copied" << std::endl;
}

// Assignment operator overload
WrongDog & WrongDog::operator=(const WrongDog& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string  WrongDog::getType() const
{
	return (this->_type);
}
