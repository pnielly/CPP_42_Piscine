/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:54:26 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 21:55:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <unistd.h>

int	main()
{
	std::cout << std::endl;
	ClapTrap jojo("Jojo");
	ClapTrap lulu("Lulu");

	std::cout << std::endl;
	jojo.attack("Lulu");
	lulu.takeDamage(jojo.getDamage());
	jojo.attack("Lulu");
	lulu.takeDamage(jojo.getDamage());
	lulu.beRepaired(2);

	std::cout << std::endl;
	std::cout << "Energy level: " << lulu.getEnergy() << std::endl;
	return 0;
}
