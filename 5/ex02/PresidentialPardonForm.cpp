/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 17:13:09 by user42            #+#    #+#             */
/*   Updated: 2021/08/31 17:22:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

// Default Constructor
PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", 0, 25, 5)
{
	this->setTarget("Unkown");
}

// Init Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string const & target):
	AForm("PresidentialPardonForm", 0, 25, 5) 
{
	this->setTarget(target);
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{}

// Copy
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src): AForm(src)
{}

// Assignment operator overload
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	if (this != &rhs)
	{
		this->setName(rhs.getName());
		this->setState(rhs.getState());
		this->setSignGrade(rhs.getSignGrade());
		this->setExeGrade(rhs.getExeGrade());
	}
	return (*this);
}

//execute
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getState())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExeGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << this->getTarget() << " has been forgiven Zafod Beeblebrox." << std::endl;
}
