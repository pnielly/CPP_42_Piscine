/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:42:31 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 16:09:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define TAB_LEN 5

#define YELLOW "\e[1;33m"
#define NC "\e[0m"

int	main(void)
{
	char		ctab[] = {'a', 'b', 'c', 'd', 'e'};
	int		itab[] = {1, 2, 3, 4, 5};
	std::string	stab[] = {"un", "deux", "trois", "quatre", "cinq"};
	float		ftab[] = {1.2, 2.3, 3.4, 4.5, 5.6};

	std::cout << YELLOW << "Array of char" << NC << std::endl;
	iter<char>(ctab, TAB_LEN, print);
	std::cout << std::endl;

	std::cout << YELLOW << "Array of int" << NC << std::endl;
	iter<int>(itab, TAB_LEN, print);
	std::cout << std::endl;

	std::cout << YELLOW << "Array of string" << NC << std::endl;
	iter<std::string>(stab, TAB_LEN, print);
	std::cout << std::endl;
	
	std::cout << YELLOW << "Array of float" << NC << std::endl;
	iter<float>(ftab, TAB_LEN, print);
	std::cout << std::endl;
}
