/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 18:13:20 by user42            #+#    #+#             */
/*   Updated: 2021/09/20 12:08:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#define YELLOW "\e[1;33m"
#define NC "\e[0m"

//EXCEPTION
char const	*NoSuchElementException::what() const throw()
{
	return ("Could not find such element in this container.");
}

// display() : prints a string
void	display(std::string str)
{
	std::cout << std::endl;
	std::cout << YELLOW << str << NC << std::endl;
	std::cout << std::endl;
}

// main
int	main(void)
{
	int n = 10;

	display("Testing with a list.");
	
	std::list<int>	lst;
	for (int i = 0; i < n; i++)
		lst.push_back(i);
	
	cleanfind< std::list<int> >(lst, 3);
	cleanfind< std::list<int> >(lst, 11);

	display("Testing with a vector.");

	std::vector<int> vct;
	for (int i = 0; i < n; i++)
		vct.push_back(i);
	
	cleanfind< std::vector<int> >(vct, 3);
	cleanfind< std::vector<int> >(vct, 11);

	return (0);
}
