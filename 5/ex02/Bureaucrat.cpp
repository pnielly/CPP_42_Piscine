/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:31:21 by user42            #+#    #+#             */
/*   Updated: 2021/08/31 17:25:29 by user42           ###   ########.fr       */
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
		this->_name = rhs._name;
		this->_grade = rhs._grade;
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

//signForm
void	Bureaucrat::signForm(AForm & f)
{
	try 
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signs " << f.getName() << "." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " cannot sign because " << e.what() << std::endl;
	}
}

//executeForm
void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " has executed " << form.getName() << "." << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->getName() << " couldn't execute because " << e.what() << std::endl;
	}
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

