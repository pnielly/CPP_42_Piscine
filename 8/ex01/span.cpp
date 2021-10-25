/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:27:47 by user42            #+#    #+#             */
/*   Updated: 2021/09/21 13:49:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

//******************************************************************//
//                COPLIAN CLASS DEFINITION                          //
//******************************************************************//

// Default Constructor
Span::Span()
{}

// Destructor
Span::~Span()
{}

// Copy
Span::Span(const Span& src)
{
	*this = src;
}

// Assignment operator overload
Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->_size_max = rhs._size_max;
		this->_vec = rhs._vec;

	}
	return (*this);
}

//******************************************************************//
//                END OF COPLIAN CLASS DEF                          //
//******************************************************************//

// Init Constructor
Span::Span(unsigned int const N): _size_max(N)
{}

// addNumber() : adds a single number to the list of Span (if _size_max not reached)
void	Span::addNumber(int const ToAdd)
{
	try {
		if (this->_size_max > this->_vec.size())
			this->_vec.push_back(ToAdd);
		else
			throw MaxSizeReachedException();
	}
	catch (MaxSizeReachedException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

// addNumber() overload : fills from "from" to "to" with random numbers.
int	randomNumber(void)
{
	return std::rand()%100;
}

void	Span::addNumber(unsigned int from, unsigned int to)
{
	if (to >= this->_size_max)
		throw ForbiddenAccessException();
	if (to <= from)
		throw IllogicalParamException();
	if (to >= this->_size_max)
		this->_vec.resize(to);
	this->_vec.resize(to);
	srand(time(NULL));
	std::generate(this->_vec.begin() + from, this->_vec.begin() + (to - from), randomNumber);
}

//display a vector
void	Span::display(void)
{
	for (size_t i = 0; i < this->_vec.size(); i++)
		std::cout << this->_vec[i] << " ";
}

//shortestSpan()
int	Span::shortestSpan(void)
{
	int	s_span;

	try {
		if (this->_vec.size() < 2)
			throw TooSmallException();
		std::vector<int> tmp(this->_vec);
		sort(tmp.begin(), tmp.end());
		s_span = tmp[tmp.size() - 1] - tmp[0];
		for (size_t i = 0; i < tmp.size() - 1; i++)
		{
			if (tmp[i + 1] - tmp[i] < s_span)
				s_span = tmp[i + 1] - tmp[i];
		}
		return (s_span);
	}
	catch (TooSmallException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}

//longestSpan()
int	Span::longestSpan(void)
{
	int	l_span;

	try {
		if (this->_vec.size() < 2)
			throw TooSmallException();
		std::vector<int> tmp(this->_vec);
		sort(tmp.begin(), tmp.end());
		l_span = tmp[tmp.size() - 1] - tmp[0];
		return (l_span);	
	}
	catch (TooSmallException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}

// Exceptions
char const *Span::MaxSizeReachedException::what() const throw()
{
	return ("Max size reached. Can't add new element to Span.");
}

char const *Span::TooSmallException::what() const throw()
{
	return ("Span doesn't contain enough elements to compute a span !");
}

char const *Span::ForbiddenAccessException::what() const throw()
{
	return ("Trying to access unallocated area ! You're gone too far in the array.");
}

char const *Span::IllogicalParamException::what() const throw()
{
	return ("Illogical parameters.");
}
