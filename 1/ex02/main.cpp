/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:40:01 by user42            #+#    #+#             */
/*   Updated: 2021/07/26 19:43:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string& stringREF = s;
	
	std::cout << "Adress of s : " << &s << std::endl;
	std::cout << "Adress of s : " << stringPTR << std::endl;
	std::cout << "Adress of s : " << &stringREF << std::endl;

	std::cout << "Value of s : " << *stringPTR << std::endl;
	std::cout << "Value of s : " << stringREF << std::endl;

	return 0;
}
