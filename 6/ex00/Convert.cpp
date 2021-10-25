/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 19:20:22 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 22:26:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/** **************************************************************************** **/
/** COPLIAN CLASS DECLARATION                                                    **/
/** **************************************************************************** **/

// Default Constructor
Convert::Convert(): _str("0")
{}

// Init Constructor
Convert::Convert(std::string const & str): _str(str)
{}

// Destructor
Convert::~Convert()
{}

// Copy
Convert::Convert(const Convert& src)
{
	*this = src;
}

// Assignment operator overload
Convert& Convert::operator=(const Convert& rhs)
{
	if (this != &rhs)
	{
		this->_str = rhs._str;
	}
	return (*this);
}

/** **************************************************************************** **/
/** END OF COPLIAN CLASS DECLARATION                                             **/
/** **************************************************************************** **/

// Getters
std::string const & Convert::getStr() const
{
	return (this->_str);
}

// Cast Operators
Convert::operator char()
{
	std::string const str = this->getStr();
	char	*endptr = NULL;
	long int	c;

	c = strtol(str.c_str(), &endptr, 10);
	if (str.c_str() == endptr)
		throw Convert::CantConvertException();
	if (c <= 32 || c >= 127)
		throw Convert::CantPrintException();
	return c;
}

Convert::operator int()
{
	std::string str = this->getStr();
	char		*endptr = NULL;
	long int	i;

	i = strtol(str.c_str(), &endptr, 10);
	if (str.c_str() == endptr)
		throw Convert::CantConvertException();
	if (i > INT32_MAX || i < INT32_MIN)
		throw Convert::CantConvertException();
	return i;
}

Convert::operator float()
{
	std::string str = this->getStr();
	char		*endptr = NULL;
	float		f;

	f = strtof(str.c_str(), &endptr);
	if (str.c_str() == NULL)
		throw Convert::CantConvertException();
	return f;
}

Convert::operator double()
{
	std::string str = this->getStr();
	char		*endptr = NULL;
	double		d;

	d = strtod(str.c_str(), &endptr);
	if (str.c_str() == NULL)
		throw Convert::CantConvertException();
	return d;
}

// DISPLAY FUNCTION
void	Convert::display(void)
{
	std::cout << "char: ";	
	this->printChar();
	std::cout << "int: ";	
	this->printInt();
	std::cout << "float: ";	
	this->printFloat();
	std::cout << "double: ";	
	this->printDouble();
}

// Print functions
// char
void	Convert::printChar(void)
{
	try {
		char c = static_cast<char>(*this);
		std::cout << c << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

// int
void	Convert::printInt(void)
{
	try {
		int i = static_cast<int>(*this);
		std::cout << i << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

// float
void	Convert::printFloat(void)
{
	std::cout << std::fixed << std::setprecision(1) << std::showpoint;
	try {
		float f = static_cast<float>(*this);
		std::cout << f << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

// double
void	Convert::printDouble(void)
{
	try {
		double d = static_cast<double>(*this);
		std::cout << d << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

// Exceptions
char const *Convert::CantPrintException::what() const throw()
{
	return "Non displayable";
}

char const *Convert::CantConvertException::what() const throw()
{
	return "impossible";
}
