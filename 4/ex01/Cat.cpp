/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 13:39:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Cat::Cat(): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

// Destructor
Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destroyed" << std::endl;
}

// Copy
Cat::Cat(const Cat& op): Animal(op)
{
	this->_brain = new Brain(*(op._brain));
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

//getters
Brain	*Cat::getBrain()
{
	return (this->_brain);
}

std::string Cat::getType() const
{
	return (this->_type);
}

// makeSound()
void	Cat::makeSound() const
{
	std::cout << "The Cat does *Miaou Miaou*" << std::endl;
}
