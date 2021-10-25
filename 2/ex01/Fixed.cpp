/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:35:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 13:33:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Classe canonique (Coplien) */

// Default Contructor

Fixed::Fixed()
{
	this->_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

// Init contructor (int)

Fixed::Fixed(const int integer)
{
	this->_value = integer << this->_fractional_bits;	
	std::cout << "Int constructor called" << std::endl;
}

// Init contructor (float)
// 1. x = floater * 2^(fractional_bits)
// Shifting left a binary by one is the same as "* 2" the decimal version
// 2. round x to the nearest integer

Fixed::Fixed(const float floater)
{
	this->_value = roundf(floater * (1 << this->_fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Copy Contructor

Fixed::Fixed(const Fixed& copy)
{
	this->_value = copy.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator overload

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
	return (this->_value);	
	std::cout << "getRawBits member function called" << std::endl;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;	
}

// ex01 functions
int	Fixed::toInt(void) const
{
	return ((int)(this->_value >> this->_fractional_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fractional_bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
