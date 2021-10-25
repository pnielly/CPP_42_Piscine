/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:23:21 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 22:00:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	FragTrap::print_player()
{
	std::cout << "FR4G-TP " << this->_name << " (" << this->_hit_points << ") : ";
}

//default constructor
FragTrap::FragTrap(): ClapTrap()
{
	print_player();
	std::cout << "Yo I am a FragTrapper." << std::endl;
}

//init constructor
FragTrap::FragTrap(std::string name): ClapTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 100;
	_max_energy_points = 100;
	_name = name;
	_attack_damage = 30;
	print_player();
	std::cout << "Ich bin ein FragTrapper." << std::endl;
}

// copy
FragTrap::FragTrap(const FragTrap& op): ClapTrap()
{
	print_player();
	std::cout << "Copying FragTP identified as " << op._name << "." << std::endl;
}

//destructor
FragTrap::~FragTrap()
{
	print_player();
	std::cout << "Looks like it is time to go back to ashes." << std::endl;
}

// assignment operator overload
FragTrap & FragTrap:: operator=(const FragTrap& op)
{
	if (this == &op)
		return (*this);
	this->_hit_points = op._hit_points;
	this->_max_hit_points = op._max_hit_points;
	this->_energy_points = op._energy_points;
	this->_max_energy_points = op._max_energy_points;
	this->_name = op._name;
	this->_attack_damage = op._attack_damage;
	return (*this);
}

// high five
void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap named " << this->_name << " requests a \"high five\" from you." << std::endl;
}

// getEnergy
unsigned int	FragTrap::getEnergy()
{
	return (this->_energy_points);
}
