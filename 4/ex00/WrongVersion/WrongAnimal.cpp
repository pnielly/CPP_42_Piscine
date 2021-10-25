/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:15:44 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 17:15:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal created" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

// Copy
WrongAnimal::WrongAnimal(const WrongAnimal& op)
:
	_type(op._type)
{
	std::cout << "WrongAnimal copied" << std::endl;
}

// Assignment operator overload
WrongAnimal & WrongAnimal::operator=(const WrongAnimal& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string	WrongAnimal::getType() const
{
		return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The Wrong Animal does *Wrong Animal sound*" << std::endl;
}
