/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:12:00 by user42            #+#    #+#             */
/*   Updated: 2021/09/15 21:30:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#define YELLOW "\e[1;33m"
#define NC "\e[0m"

void	pardon()
{
	std::cout << YELLOW << "Presidential Pardon" << NC << std::endl;

	Intern		someRandomIntern;
	Bureaucrat	a1("Bureaucrat who can sign", 25);
	Bureaucrat	a2("Bureaucrat who can execute", 5);
	AForm		*aform;

	aform = someRandomIntern.makeForm("presidential pardon", "Maison");

	a1.signForm(*aform);
	a2.executeForm(*aform);
	delete aform;
	std::cout << std::endl;

	Bureaucrat	b1("Bureaucrat who can't sign", 146);
	Bureaucrat	b2("Bureaucrat who can execute", 5);
	AForm		*bform;

	bform = someRandomIntern.makeForm("presidential pardon", "Maison");

	b1.signForm(*bform);
	b2.executeForm(*bform);
	delete bform;
	std::cout << std::endl;

	Bureaucrat	c1("Bureaucrat who can sign", 25);
	Bureaucrat	c2("Bureaucrat who can't execute", 150);
	AForm		*cform;

	cform = someRandomIntern.makeForm("presidential pardon", "Maison");

	c1.signForm(*cform);
	c2.executeForm(*cform);
	delete cform;
	std::cout << std::endl;

	Bureaucrat	d1("Bureaucrat who can't sign", 150);
	Bureaucrat	d2("Bureaucrat who can't execute", 150);
	AForm		*dform;

	dform = someRandomIntern.makeForm("presidential pardon", "Maison");

	d1.signForm(*dform);
	d2.executeForm(*dform);
	delete dform;
}

void	rob()
{
	std::cout << YELLOW << "Robotomy Request" << NC << std::endl;

	Intern		someRandomIntern;
	Bureaucrat	a1("Bureaucrat who can sign", 25);
	Bureaucrat	a2("Bureaucrat who can execute", 5);
	AForm		*aform;

	aform = someRandomIntern.makeForm("robotomy request", "Maison");

	a1.signForm(*aform);
	a2.executeForm(*aform);
	delete aform;
	std::cout << std::endl;

	Bureaucrat	b1("Bureaucrat who can't sign", 150);
	Bureaucrat	b2("Bureaucrat who can execute", 5);
	AForm		*bform;

	bform = someRandomIntern.makeForm("robotomy request", "Maison");

	b1.signForm(*bform);
	b2.executeForm(*bform);
	delete bform;
	std::cout << std::endl;

	Bureaucrat	c1("Bureaucrat who can sign", 25);
	Bureaucrat	c2("Bureaucrat who can't execute", 150);
	AForm		*cform;

	cform = someRandomIntern.makeForm("robotomy request", "Maison");

	c1.signForm(*cform);
	c2.executeForm(*cform);
	delete cform;
	std::cout << std::endl;

	Bureaucrat	d1("Bureaucrat who can't sign", 150);
	Bureaucrat	d2("Bureaucrat who can't execute", 150);
	AForm		*dform;

	dform = someRandomIntern.makeForm("robotomy request", "Maison");

	d1.signForm(*dform);
	d2.executeForm(*dform);
	delete dform;
}

void	shrub()
{
	std::cout << YELLOW << "Shrubbery Creation" << NC << std::endl;

	Intern		someRandomIntern;
	Bureaucrat	a1("Bureaucrat who can sign", 25);
	Bureaucrat	a2("Bureaucrat who can execute", 5);
	AForm		*aform;

	aform = someRandomIntern.makeForm("shrubbery creation", "Maison");

	a1.signForm(*aform);
	a2.executeForm(*aform);
	delete aform;
	std::cout << std::endl;

	Bureaucrat	b1("Bureaucrat who can't sign", 150);
	Bureaucrat	b2("Bureaucrat who can execute", 5);
	AForm		*bform;

	bform = someRandomIntern.makeForm("shrubbery creation", "Maison");

	b1.signForm(*bform);
	b2.executeForm(*bform);
	delete bform;
	std::cout << std::endl;

	Bureaucrat	c1("Bureaucrat who can sign", 25);
	Bureaucrat	c2("Bureaucrat who can't execute", 150);
	AForm		*cform;

	cform = someRandomIntern.makeForm("shrubbery creation", "Maison");

	c1.signForm(*cform);
	c2.executeForm(*cform);
	delete cform;
	std::cout << std::endl;

	Bureaucrat	d1("Bureaucrat who can't sign", 150);
	Bureaucrat	d2("Bureaucrat who can't execute", 150);
	AForm		*dform;

	dform = someRandomIntern.makeForm("shrubbery creation", "Maison");

	d1.signForm(*dform);
	d2.executeForm(*dform);
	delete dform;
}

int	main(void)
{
	shrub();
	std::cout << std::endl;
	rob();
	std::cout << std::endl;
	pardon();
	return (0);
}
