/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:55:29 by user42            #+#    #+#             */
/*   Updated: 2021/07/26 18:55:32 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
** Constructor
**/

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << _name << " just got infected ! He's now a Zombie...!" << std::endl;
}

Zombie::Zombie()
{
	std::cout << "An unkown guy just got infected. He a Zombie now." << std::endl;
}

/**
** Destructor
**/

Zombie::~Zombie()
{
	std::cout << "A Zombie named " << _name << " was just destroyed." << std::endl;
}

/**
** announce()
**/

void	Zombie::announce(void) const
{
	std::cout << "<" <<_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

/**
** newZombie
**/

Zombie*	newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	
	return zombie;
}

/**
** newZombie
**/

void	randomChump(std::string name)
{
	Zombie zombie(name);

	zombie.announce();
}

/**
** setName()
**/

void	Zombie::setName(std::string name)
{
	this->_name = name;
}
