/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 16:06:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat created" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "Cat destroyed" << std::endl;
}

// Copy
Cat::Cat(const Cat& op)
{
	this->_type = op._type;
	std::cout << "Cat copied" << std::endl;
}

// Assignment operator overload
Cat & Cat::operator=(const Cat& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

std::string Cat::getType() const
{
	return (this->_type);
}

void	Cat::makeSound() const
{
	std::cout << "The Cat does *Miaou Miaou*" << std::endl;
}
