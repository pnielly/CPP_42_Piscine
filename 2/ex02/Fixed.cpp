/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 10:35:55 by user42            #+#    #+#             */
/*   Updated: 2021/08/09 20:25:52 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

/* Classe canonique (Coplien) */

// Default Contructor

Fixed::Fixed()
{
	this->_value = 0;
}

// Init contructor (int)

Fixed::Fixed(const int integer)
{
	this->_value = integer << this->_fractional_bits;	
}

// Init contructor (float)
// 1. x = floater * 2^(fractional_bits)
// 2. round x to the nearest integer

Fixed::Fixed(const float floater)
{
	this->_value = roundf(floater * (1 << this->_fractional_bits));
}

// Destructor

Fixed::~Fixed()
{
}

// Copy Contructor

Fixed::Fixed(const Fixed& copy)
{
	this->_value = copy.getRawBits();
}

// Surcharge d'operateur d'assignation

Fixed &Fixed::operator=(const Fixed& op)
{
	if (this == &op)
		return (*this);
	this->_value = op.getRawBits();
	return (*this);
}

/* Manipulation functions */

int Fixed::getRawBits(void) const
{
	return (this->_value);	
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;	
}

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

// Rajout ex02

// Operator "+"

Fixed Fixed::operator+(const Fixed& op) const
{
	Fixed ret;
	ret.setRawBits(this->_value + op.getRawBits());
	return (ret);	
}

// Operator "-"

Fixed Fixed::operator-(const Fixed& op) const
{
	Fixed ret;
	ret.setRawBits(this->_value - op.getRawBits());
	return (ret);	
}

// Operator "*"

Fixed Fixed::operator*(const Fixed& op) const
{
	Fixed ret;
	ret.setRawBits((this->_value * op.getRawBits()) >> this->_fractional_bits);
	return (ret);	
}

// Operator "/"

Fixed Fixed::operator/(const Fixed& op) const
{
	Fixed ret;
	ret.setRawBits((this->_value << this->_fractional_bits) / op.getRawBits());
	return (ret);	
}

// Pre increment operator

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

// Post increment operator

Fixed	Fixed::operator++(int)
{
	Fixed ret(*this);
	operator++();
	return (ret);
}

// Pre decrement operator

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

// Post decrement operator

Fixed	Fixed::operator--(int)
{
	Fixed ret(*this);
	operator--();
	return (ret);
}

// Operator ">"

bool Fixed::operator>(const Fixed &op) const
{
	return (this->_value > op.getRawBits());
}

// Operator "<"

bool Fixed::operator<(const Fixed &op) const
{
	return (this->_value < op.getRawBits());
}

// Operator ">="

bool Fixed::operator>=(const Fixed &op) const
{
	return (this->_value >= op.getRawBits());
}

// Operator "<="

bool Fixed::operator<=(const Fixed &op) const
{
	return (this->_value <= op.getRawBits());
}

// Operator "=="

bool Fixed::operator==(const Fixed &op) const
{
	return (this->_value == op.getRawBits());
}

// Operator "!="

bool Fixed::operator!=(const Fixed &op) const
{
	return (this->_value != op.getRawBits());
}

// member min const
const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

// member min
Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

// member max const
const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

// member max
Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
