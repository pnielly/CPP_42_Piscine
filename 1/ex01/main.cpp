/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 15:40:01 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 09:25:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <stdlib.h>

int	ft_error(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage : ./infection [# of zombies]" << std::endl;
		return 1;
	}
	int ret = 0;
	int i = -1;
	while (av[1][++i])
	{
		if (!isdigit(av[1][i]))
			ret = 1;
	}
	if (ret)
		std::cout << "Usage : ./infection [# of zombies]" << std::endl;
	return ret;
}

int	main(int ac, char **av)
{
	Zombie *horde;
	int	pop;

	if (ft_error(ac, av))
		return (1);
	pop = atoi(av[1]);
	horde = zombieHorde(pop, "Jojo");
	
	for (int i = 0; i < pop; i++)
		horde[i].announce();

	delete[] horde;

	return 0;
}
