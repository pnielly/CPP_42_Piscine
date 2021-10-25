/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 16:06:19 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog created" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

// Copy
Dog::Dog(const Dog& op)
{
	this->_type = op._type;
	std::cout << "Dog copied" << std::endl;
}

// Assignment operator overload
Dog & Dog::operator=(const Dog& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string  Dog::getType() const
{
	return (this->_type);
}

void	Dog::makeSound() const
{
	std::cout << "The Dog says *Ouaf Ouaf*" << std::endl;
}
