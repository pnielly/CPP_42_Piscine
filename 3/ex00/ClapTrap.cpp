/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:39:48 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 21:54:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//my functions
void	ClapTrap::_print_player()
{
	std::cout << "CL4P-TP " << this->_name << " (" << this->_hit_points << ") : ";
}

unsigned int	ClapTrap::getDamage()
{
	return this->_attack_damage;
}

unsigned int	ClapTrap::getEnergy()
{
	return this->_energy_points;
}


//default constructor
ClapTrap::ClapTrap()
:
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	_print_player();
	std::cout << "Let's get this party started !" << std::endl;
}

//init constructor
ClapTrap::ClapTrap(std::string name)
:
	_name(name),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	_print_player();
	std::cout << "Let's get this party started !" << std::endl;
}

//copy
ClapTrap::ClapTrap(const ClapTrap& op)
:
	_name(op._name),
	_hit_points(op._hit_points),
	_energy_points(op._energy_points),
	_attack_damage(op._attack_damage)
{
    _print_player();
    std::cout << "Like your style " << op._name << ", I'll copy that." << std::endl;
}

//destructor
ClapTrap::~ClapTrap()
{
	_print_player();
	std::cout << "For you... I commit... seppuku..." << std::endl;
}

//assignment operator overload
ClapTrap & ClapTrap:: operator=(const ClapTrap& op)
{
	if (this == &op)
		return (*this);
	this->_hit_points = op._hit_points;
	this->_energy_points = op._energy_points;
	this->_name = op._name;
	this->_attack_damage = op._attack_damage;
	return (*this);
}

// attack
void	ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << getDamage() << " points of damage!" << std::endl;
}

// Take damage
void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	tmp;

	tmp = this->_hit_points;
	(int)this->_hit_points - (int)amount < 0 ? this->_hit_points = 0 : this->_hit_points -= amount;
	if (!this->_hit_points)
		amount = amount - (amount - tmp);
	_print_player();
	std::cout << "[Taking Damage] I got shot ! I lost " << amount << " HP !" << std::endl;
}

// Repair
void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hit_points += amount;
	_print_player();
	std::cout << "[REPARING] " << amount << " hp increase... You made my day." << std::endl;
}
