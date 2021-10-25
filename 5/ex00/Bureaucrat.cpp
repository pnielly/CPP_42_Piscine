/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:31:21 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 13:24:22 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Default Constructor
Bureaucrat::Bureaucrat():
	_name("Unknown"), _grade(150)
{}

// Init Constructor
Bureaucrat::Bureaucrat(std::string const name, int const grade):
	_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

// Destructor
Bureaucrat::~Bureaucrat()
{}

// Copy
Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

// Assignment operator overload
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	if (this != &rhs)
	{
		std::string *tmp_name = (std::string *)&this->_name;
		*tmp_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

//getters

std::string const &	Bureaucrat::getName() const { return (this->_name); }

int const &		Bureaucrat::getGrade() const { return (this->_grade); }

//setters
void		Bureaucrat::incGrade()
{
	if (this->getGrade() <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--this->_grade;
}

void		Bureaucrat::decGrade()
{
	if (this->getGrade() >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		++this->_grade;

}

//Exceptions
char const *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

char const *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

// << operator overload
std::ostream& operator<<(std::ostream & out, Bureaucrat const & b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return out;
}
