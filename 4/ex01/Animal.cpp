/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:15:44 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 14:33:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Animal::Animal()
{
	std::cout << "Animal created" << std::endl;
}

// init constructor
Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal of type " << this->_type  << " created" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal destroyed" << std::endl;
}

// Copy
Animal::Animal(const Animal& op)
:
	_type(op._type)
{
	std::cout << "Animal copied" << std::endl;
}

// Assignment operator overload
Animal & Animal::operator=(const Animal& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string	Animal::getType() const
{
		return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "The Animal does *Animal sound*" << std::endl;
}
