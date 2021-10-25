/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 20:05:38 by user42            #+#    #+#             */
/*   Updated: 2021/07/27 00:36:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/**
** Constructor
**/

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon), _name(name)
{
}

/**
** Destructor
**/

HumanA::~HumanA(void)
{}

/**
** attack()
**/

void	HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
