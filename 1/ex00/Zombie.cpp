/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:55:29 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 09:09:49 by user42           ###   ########.fr       */
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
