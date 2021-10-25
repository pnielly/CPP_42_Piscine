/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:12:00 by user42            #+#    #+#             */
/*   Updated: 2021/08/31 17:43:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#define YELLOW "\e[1;33m"
#define NC "\e[0m"

void	pardon()
{
	std::cout << YELLOW << "Presidential Pardon" << NC << std::endl;

	Bureaucrat	a1("Bureaucrat who can sign", 25);
	Bureaucrat	a2("Bureaucrat who can execute", 5);
	PresidentialPardonForm		f1("Maison");

	a1.signForm(f1);
	a2.executeForm(f1);

	std::cout << std::endl;
	Bureaucrat	b1("Bureaucrat who can't sign", 26);
	Bureaucrat	b2("Bureaucrat who can execute", 5);
	PresidentialPardonForm		f2("Maison");
	
	b1.signForm(f2);
	b2.executeForm(f2);

	std::cout << std::endl;
	Bureaucrat	c1("Bureaucrat who can sign", 25);
	Bureaucrat	c2("Bureaucrat who can't execute", 6);
	PresidentialPardonForm		f3("Maison");
	
	c1.signForm(f3);
	c2.executeForm(f3);
	
	std::cout << std::endl;
	Bureaucrat	d1("Bureaucrat who can't sign", 26);
	Bureaucrat	d2("Bureaucrat who can't execute", 6);
	PresidentialPardonForm		f4("Maison");
	
	d1.signForm(f4);
	d2.executeForm(f4);
}

void	rob()
{
	std::cout << YELLOW << "Robotomy Request" << NC << std::endl;

	Bureaucrat	a1("Bureaucrat who can sign", 72);
	Bureaucrat	a2("Bureaucrat who can execute", 45);
	RobotomyRequestForm		f1("Maison");

	a1.signForm(f1);
	a2.executeForm(f1);

	std::cout << std::endl;
	Bureaucrat	b1("Bureaucrat who can't sign", 73);
	Bureaucrat	b2("Bureaucrat who can execute", 45);
	RobotomyRequestForm		f2("Maison");
	
	b1.signForm(f2);
	b2.executeForm(f2);

	std::cout << std::endl;
	Bureaucrat	c1("Bureaucrat who can sign", 72);
	Bureaucrat	c2("Bureaucrat who can't execute", 46);
	RobotomyRequestForm		f3("Maison");
	
	c1.signForm(f3);
	c2.executeForm(f3);
	
	std::cout << std::endl;
	Bureaucrat	d1("Bureaucrat who can't sign", 73);
	Bureaucrat	d2("Bureaucrat who can't execute", 46);
	RobotomyRequestForm		f4("Maison");
	
	d1.signForm(f4);
	d2.executeForm(f4);
}

void	shrub()
{
	std::cout << YELLOW << "Shrubbery Creation" << NC << std::endl;

	Bureaucrat	a1("Bureaucrat who can sign", 145);
	Bureaucrat	a2("Bureaucrat who can execute", 137);
	ShrubberyCreationForm		f1("Maison");

	a1.signForm(f1);
	a2.executeForm(f1);

	std::cout << std::endl;
	Bureaucrat	b1("Bureaucrat who can't sign", 146);
	Bureaucrat	b2("Bureaucrat who can execute", 137);
	ShrubberyCreationForm		f2("Maison");
	
	b1.signForm(f2);
	b2.executeForm(f2);

	std::cout << std::endl;
	Bureaucrat	c1("Bureaucrat who can sign", 145);
	Bureaucrat	c2("Bureaucrat who can't execute", 138);
	ShrubberyCreationForm		f3("Maison");
	
	c1.signForm(f3);
	c2.executeForm(f3);
	
	std::cout << std::endl;
	Bureaucrat	d1("Bureaucrat who can't sign", 146);
	Bureaucrat	d2("Bureaucrat who can't execute", 138);
	ShrubberyCreationForm		f4("Maison");
	
	d1.signForm(f4);
	d2.executeForm(f4);
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
