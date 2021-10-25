/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:56:17 by user42            #+#    #+#             */
/*   Updated: 2021/08/31 17:10:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

// Default Constructor
RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", 0, 72, 45)
{
	this->setTarget("Unkown");
}

// Init Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string const & target):
	AForm("RobotomyRequestForm", 0, 72, 45) 
{
	this->setTarget(target);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{}

// Copy
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): AForm(src)
{}

// Assignment operator overload
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
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
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getState())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExeGrade())
		throw Bureaucrat::GradeTooLowException();
	std::cout << "*DRILL NOISES*" << std::endl;
	srand(time(NULL));
	if (rand() % 2 == true)
		std::cout << this->getTarget() << " has been robotomized." << std::endl;
	else
		std::cout << this->getTarget() << " could not be robotomized !" << std::endl;
}
