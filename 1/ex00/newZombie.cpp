/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 18:59:37 by user42            #+#    #+#             */
/*   Updated: 2021/07/26 18:59:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
** newZombie
**/

Zombie*	newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name);
	
	return zombie;
}
