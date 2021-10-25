/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:54:26 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 21:59:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <unistd.h>

int	main()
{
	std::cout << std::endl;
	FragTrap jojo("Jojo");
	FragTrap lulu("Lulu");

	std::cout << std::endl;
	lulu.highFiveGuys();
	jojo.attack("Lulu");
	lulu.takeDamage(jojo.getDamage());
	jojo.attack("Lulu");
	lulu.takeDamage(jojo.getDamage());
	lulu.beRepaired(2);
	lulu.beRepaired(9);
	lulu.takeDamage(jojo.getDamage());
	lulu.takeDamage(jojo.getDamage());
	lulu.takeDamage(jojo.getDamage());
	lulu.takeDamage(jojo.getDamage());
	lulu.takeDamage(jojo.getDamage());
	lulu.takeDamage(jojo.getDamage());
	lulu.takeDamage(jojo.getDamage());
	lulu.beRepaired(20);

	std::cout << std::endl;
	std::cout << "Energy level: " << lulu.getEnergy() << std::endl;
	return 0;
}
