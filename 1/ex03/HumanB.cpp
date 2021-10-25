/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 20:05:38 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 11:05:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/**
** Constructor
**/

HumanB::HumanB(std::string name): _name(name)
{
}

/**
** Destructor
**/

HumanB::~HumanB()
{}

/**
** attack()
**/

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

/**
** setWeapon()
**/

void	HumanB::setWeapon(Weapon *weapon)
{
	this->_weapon = weapon;
}
