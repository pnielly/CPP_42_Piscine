/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:57:17 by user42            #+#    #+#             */
/*   Updated: 2021/09/16 15:37:49 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "Usage: ./ex00 <your argument>" << std::endl;
	else
	{
		Convert convert(av[1]);
		convert.display();
	}
	return (0);
}
