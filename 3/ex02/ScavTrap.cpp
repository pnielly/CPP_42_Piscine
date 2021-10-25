/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:23:21 by user42            #+#    #+#             */
/*   Updated: 2021/07/29 08:59:20 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::_print_player()
{
	std::cout << "SC4V-TP " << this->_name << " (" << this->_hit_points << ") : ";
}

//default constructor
ScavTrap::ScavTrap(): ClapTrap()
{
	_print_player();
	std::cout << "Ich bin ein ScavTrapper." << std::endl;
}

//init constructor
ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	_hit_points = 100;
	_max_hit_points = 100;
	_energy_points = 50;
	_max_energy_points = 50;
	_name = name;
	_attack_damage = 20;
	_print_player();
	std::cout << "Ich bin ein ScavTrapper." << std::endl;
}

// copy
ScavTrap::ScavTrap(const ScavTrap& op): ClapTrap()
{
	_print_player();
	std::cout << "Copying ScavTP identified as " << op._name << "." << std::endl;
}

//destructor
ScavTrap::~ScavTrap()
{
	_print_player();
	std::cout << "I'm dying now." << std::endl;
}

ScavTrap & ScavTrap:: operator=(const ScavTrap& op)
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

// attack
void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " punches " << target << " in the face !!!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap named " << this->_name << " entered Gate Guard mode." << std::endl;
}
