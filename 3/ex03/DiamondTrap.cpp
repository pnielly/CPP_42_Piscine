/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:50:14 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 22:01:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void	DiamondTrap::_print_player()
{
	std::cout << "DI4M-TP " << this->_name << " (" << this->_hit_points << ") : ";
}

//default constructor
DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap()
{
	_print_player();
	std::cout << "Hey ! I am a DiamondTrap! (default constructor)" << std::endl;
}

//init constructor
DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name),
	_name(name)
{
	ClapTrap::setNameclap(name);
	this->FragTrap::setHitpoints();
	this->ScavTrap::setEnergypoints();
	this->FragTrap::setAttackdamage();

	_print_player();
	std::cout << "Hey ! I am a DiamondTrap!" << std::endl;
}

//destructor
DiamondTrap::~DiamondTrap()
{
	_print_player();
	std::cout << "I am a dead DiamondTrap." << std::endl;
}

//copy
DiamondTrap::DiamondTrap(const DiamondTrap& op)
{
	this->_name = op._name;
	this->_hit_points = op._hit_points;
	this->_energy_points = op._energy_points;
	this->_attack_damage = op._attack_damage;
	
	_print_player();
	std::cout << "Copying DiamdTP *" << op._name << "*." << std::endl;
}

//assignment operator overload
DiamondTrap & DiamondTrap:: operator=(const DiamondTrap& op)
{
	if (this == &op)
		return (*this);
	this->_hit_points = op._hit_points;
	this->_energy_points = op._energy_points;
	this->_name = op._name;
	this->_attack_damage = op._attack_damage;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

//WhoAmI()
void	DiamondTrap::WhoAmI()
{
	std::cout << "Hi, my name is : " << this->_name << "." << std::endl;
	std::cout << "And my ClapTrap (parent)'s name is : " << getNameclap() << "." << std::endl;
}

// getEnergy
unsigned int	DiamondTrap::getEnergy()
{
	return (this->_energy_points);
}
