/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 16:33:57 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 15:14:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Default Constructor
Form::Form():
	_name("X"), _signed(0), _canSign(150), _canExe(150)
{}

// Init Constructor
Form::Form(std::string const name, bool is_signed, int const canSign, int const canExe):
	_name(name), _signed(is_signed), _canSign(canSign), _canExe(canExe)
{
	if (canSign < 1 || canExe < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (canSign > 150 || canExe > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Destructor
Form::~Form()
{}

// Copy
Form::Form(const Form& src):
	_canSign(src.getSignGrade()), _canExe(src.getExeGrade())
{
	*this = src;
}

// Assignment operator overload
Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
	{
		std::string	*tmp_name = (std::string *)&this->_name;
		*tmp_name = rhs.getName();
		this->_signed = rhs.getState();
		int		*tmp_sign = (int *)&this->_canSign;
		*tmp_sign = rhs.getSignGrade();
		int		*tmp_exe = (int *)&this->_canExe;
		*tmp_exe = rhs.getExeGrade();
	}
	return (*this);
}

//getters
std::string const &	Form::getName() const { return (this->_name); }

int const &	Form::getSignGrade() const { return (this->_canSign); }

int const &	Form::getExeGrade() const { return (this->_canExe); }

bool const &	Form::getState() const { return (this->_signed); }

//beSigned
void	Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->_signed = 1;
	else
		throw Bureaucrat::GradeTooLowException();
	return ;
}

// << operator overload
std::ostream& operator<<(std::ostream & out, Form const & f)
{
	out << "Form " << f.getName() << "." << std::endl << "You need to be at least grade " << f.getSignGrade() << " to sign this form." << std::endl << "You need to be at least grade " << f.getExeGrade() << " to execute the form." << std::endl;
	if (!f.getState())
		out << "This form is not signed." << std::endl;
	else
		out << "This form is signed." << std::endl;
	return out;
}
