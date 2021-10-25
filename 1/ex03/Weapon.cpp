/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:52:06 by user42            #+#    #+#             */
/*   Updated: 2021/07/27 09:44:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/**
** Constructor
**/

Weapon::Weapon(std::string type): _type(type)
{}

Weapon::Weapon()
{}

/**
** Destructor
**/

Weapon::~Weapon()
{}

/**
** setType()
**/

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

/**
** getType()
**/

const std::string&	Weapon::getType()
{
	return this->_type;
}
