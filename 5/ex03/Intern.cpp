/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:16:25 by user42            #+#    #+#             */
/*   Updated: 2021/09/15 18:13:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

// Default Constructor
Intern::Intern()
{}

// Destructor
Intern::~Intern()
{}

// Copy
Intern::Intern(const Intern& src)
{
	*this = src;
}

// Assignment operator overload
Intern& Intern::operator=(const Intern& rhs)
{
	if (this != &rhs)
	{
		return (*this);
	}
	return (*this);
}

AForm	*Intern::makeForm(std::string const & formName, std::string const & target)
{
	t_forms	forms[] = {
		{"shrubbery creation", &generateShrub},
		{"robotomy request", &generateRob},
		{"presidential pardon", &generatePresi}
		};

	for (int i = 0; i < 3; i++)
	{
		if (formName == forms[i].formName)
		{
			std::cout << "Intern creates " << formName << "." << std::endl;
			return ((forms[i].f)(target));
		}
	}

	std::cout << "Wrong form's name spelling (must be lower case)." << std::endl;
	return NULL;
}

AForm	*generateShrub(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*generateRob(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

AForm	*generatePresi(std::string const & target)
{
	return new PresidentialPardonForm(target);
}
