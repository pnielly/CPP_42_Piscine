/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:23:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 13:39:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Default constructor
Dog::Dog(): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

// Destructor
Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destroyed" << std::endl;
}

// Copy
Dog::Dog(const Dog& op): Animal("Dog")
{
	this->_brain = new Brain(*(op._brain));
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

//getters
Brain	*Dog::getBrain()
{
	return (this->_brain);
}


std::string  Dog::getType() const
{
	return (this->_type);
}


//makeSound()
void	Dog::makeSound() const
{
	std::cout << "The Dog says *Ouaf Ouaf*" << std::endl;
}
