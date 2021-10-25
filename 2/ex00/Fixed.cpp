/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:35:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/05 12:33:43 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

/* Classe canonique (Coplien) */

// default constructor
Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

//destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = copy.getRawBits();
}

//assignment operator overload
Fixed & Fixed::operator=(const Fixed& op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &op)
		return (*this);
	this->_value = op.getRawBits();
	return (*this);
}

/* Manipulation functions */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);	
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;	
}
