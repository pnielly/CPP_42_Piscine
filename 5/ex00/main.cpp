/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:09:21 by user42            #+#    #+#             */
/*   Updated: 2021/08/31 17:45:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define GREEN "\e[1;32m"
#define NC "\e[0m"

void	test1()
{
	std::cout << GREEN << "Test 1: Creating Bureaucrats" << NC << std::endl;
	Bureaucrat	bob("Bob", 2);

	std::cout << bob << std::endl;

	std::cout << std::endl;
	std::cout << "bob : promoted !" << std::endl;
	bob.incGrade();
	std::cout << bob << std::endl;

	std::cout << std::endl;
	std::cout << "bob : retrograded !" << std::endl;
	bob.decGrade();
	std::cout << bob << std::endl;

	std::cout << "Fin test 1" << std::endl;
}

void	test2()
{
	std::cout << GREEN << "Test 2: Exceptions when using" << NC << std::endl;

	try {
		Bureaucrat	bob("Bob", 150);

		std::cout << bob << std::endl;

		std::cout << std::endl;
		std::cout << "Bob : retrograded ! --> should display error: grade too low" << std::endl;
		bob.decGrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat	cindy("Cindy", 1);

		std::cout << cindy << std::endl;

		std::cout << std::endl;
		std::cout << "Cindy : promoted ! --> should display error: grade too high" << std::endl;
		cindy.incGrade();
		std::cout << cindy << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Fin test 2" << std::endl;
}

void	test3()
{
	std::cout << GREEN << "Test 3: Exceptions when creating" << NC << std::endl;
	try {
		std::cout << "-->should display error: grade to low" << std::endl;
		Bureaucrat	bob("Bob", 151);
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << "-->should display error: grade to high" << std::endl;
		Bureaucrat	cindy("Cindy", 0);
		std::cout << std::endl;
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Fin test 3" << std::endl;
}

int	main(void)
{
	test1();
	std::cout << std::endl;
	test2();
	std::cout << std::endl;
	test3();
	return (0);
}
