/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 17:55:09 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 17:42:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;
	int	i = -1;
	std::string const message[4] = {"debug", "info", "warning", "error"};

	if (ac != 2)
	{
		std::cout << "One argument needed (no less, no more)." << std::endl;
		return 0;
	}
	while (++i < 4)
	{
		if (message[i] == (std::string)av[1])
			break ;
	}
	switch (i)
	{
		case 4:
			std::cout << "Only debug, info, warning or error accepted.";
			break;
		case 0:
			karen.complain("debug");
			std::cout << std::endl;
		case 1:
			karen.complain("info");
			std::cout << std::endl;
		case 2:
			karen.complain("warning");
			std::cout << std::endl;
		case 3:
			karen.complain("error");
	}
	return 0;
}
