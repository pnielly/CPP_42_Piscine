/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:33:57 by user42            #+#    #+#             */
/*   Updated: 2021/09/15 21:16:51 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

// Default Constructor
AForm::AForm():
	_name("X"), _signed(0), _canSign(150), _canExe(150)
{}

// Init Constructor
AForm::AForm(std::string const name, bool is_signed, int const canSign, int const canExe):
	_name(name), _signed(is_signed)
{
	if (canSign < 1 || canExe < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (canSign > 150 || canExe > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_canSign = canSign;
		this->_canExe = canExe;
	}
}

// Destructor
AForm::~AForm()
{}

// Copy
AForm::AForm(const AForm& src)
{
	*this = src;
}

// Assignment operator overload
AForm& AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_signed = rhs._signed;
		this->_canSign = rhs._canSign;
		this->_canExe = rhs._canExe;
	}
	return (*this);
}

//getters
std::string const &	AForm::getName() const { return (this->_name); }

int const &	AForm::getSignGrade() const { return (this->_canSign); }

int const &	AForm::getExeGrade() const { return (this->_canExe); }

bool const &	AForm::getState() const { return (this->_signed); }

std::string const & AForm::getTarget() const { return (this->_target); }

//setters
void	AForm::setName(std::string const & name) { this->_name = name; }
void	AForm::setSignGrade(int grade) { this->_canSign = grade; }
void	AForm::setExeGrade(int grade) { this->_canExe = grade; }
void	AForm::setState(bool state) { this->_signed = state; }
void	AForm::setTarget(std::string const & target) { this->_target = target; }

//beSigned
void	AForm::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->_signed = 1;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

// << operator overload
std::ostream& operator<<(std::ostream & out, AForm const & f)
{
	out << "AForm " << f.getName() << "." << std::endl << "You need to be at least grade " << f.getSignGrade() << "to sign this form." << std::endl << "You need to be at least grade " << f.getExeGrade() << "to execute the form." << std::endl;
	if (!f.getState())
		out << "This form is not signed." << std::endl;
	else
		out << "This form is signed." << std::endl;
	return out;
}

//Exception

char const *AForm::FormNotSignedException::what() const throw()
{
	return ("The form is not signed !");
}
