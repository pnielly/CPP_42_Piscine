/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 20:50:00 by user42            #+#    #+#             */
/*   Updated: 2021/08/31 11:29:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

// Default Constructor
ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", 0, 145, 137)
{
	this->setTarget("Unkown");
}

// Init Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target):
	AForm("ShrubberyCreationForm", 0, 145, 137) 
{
	this->setTarget(target);
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

// Copy
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): AForm(src)
{}

// Assignment operator overload
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
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
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getState())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExeGrade())
		throw Bureaucrat::GradeTooLowException();
	std::ifstream ifs("Tree");
	if (!ifs.is_open())
		throw ShrubberyCreationForm::OpenFileFailedException();
	std::ofstream ofs((this->getTarget() + "_shrubbery").c_str());
	if (!ofs.is_open())
		throw ShrubberyCreationForm::OpenFileFailedException();
	
	std::string buffer;
	while (true)
	{
		std::getline(ifs, buffer);
		ofs << buffer;
		if (ifs.eof() == true)
			break ;
		else
			ofs << std::endl;
	}
	ifs.close();
	ofs.close();
}

//Exception

char const *ShrubberyCreationForm::OpenFileFailedException::what() const throw()
{
	return ("The file failed to open...");
}
