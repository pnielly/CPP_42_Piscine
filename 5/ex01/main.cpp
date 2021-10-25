/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 19:12:00 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 14:04:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define YELLOW "\e[1;33m"
#define NC "\e[0m"

int	main(void)
{
	Bureaucrat	a1("Bob le Bureaucrate", 150);
	Bureaucrat	a2("Cindy la Technocrate", 1);
	Form		f1("B42", 0, 5, 1);
	Form		f2("B42", 0, 5, 1);

	std::cout << a1 << std::endl;
	a1.signForm(f1);
	std::cout << YELLOW << "Testing operator to ostream overload with Bob's form." << NC << std::endl;
	std::cout << f1;

	std::cout << std::endl;

	std::cout << a2 << std::endl;
	a2.signForm(f2);
	std::cout << YELLOW << "Testing operator to ostream overload with Cindy's form." << NC << std::endl;
	std::cout << f2;
}
