/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:16:50 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 20:37:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Default Constructor
Character::Character():
	_name("Unknown character")
{
	for (int i = 0; i < INVENTORY; i++)
		this->_m[i] = NULL;	
	for (int i = 0; i < INVENTORY; i++)
		this->_store[i] = NULL;	
}

// Init Constructor
Character::Character(std::string name):
	_name(name)
{
	for (int i = 0; i < INVENTORY; i++)
		this->_m[i] = NULL;	
	for (int i = 0; i < INVENTORY; i++)
		this->_store[i] = NULL;	
}

// Destructor
Character::~Character()
{
	for (int i = 0; i < INVENTORY; i++)
		this->unequip(i);
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_store[i])
			delete this->_store[i];
	}
}

// Copy
Character::Character(const Character& op)
{
	this->_name = op.getName();
	for (int i = 0; i < INVENTORY; i++)
	{
		if (op._m[i])
			this->_m[i] = op._m[i]->clone();
		else
			this->_m[i] = NULL;
	}
	for (int i = 0; i < INVENTORY; i++)
		this->_store[i] = NULL;
}

// Assignment operator overload
Character& Character::operator=(const Character& op)
{
	if (this == &op)
		return (*this);
	this->_name = op.getName();
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_m[i])
			delete this->_m[i];
		if (op._m[i])
			this->_m[i] = op._m[i]->clone();
		else
			this->_m[i] = NULL;
	}
	for (int i = 0; i < INVENTORY; i++)
		this->_store[i] = NULL;
	return (*this);
}


// exercise functions
std::string const&	Character::getName() const
{
	return (this->_name);	
}

void	Character::equip(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia doesn't exist..!" << std::endl;
		return ;
	}
	for (int i = 0; i < INVENTORY; i++)
	{
		if (!this->_m[i])
		{
			this->_m[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full !" << std::endl;
}

void	Character::unequip(int idx)
{
	if (!this->_m[idx])
	{
		return ;
	}
	this->_store[idx] = this->_m[idx];
	this->_m[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INVENTORY)
	{
		std::cout << "Wrong index." << std::endl;
		return ;
	}
	if (this->_m[idx])
		this->_m[idx]->use(target);
	else
		std::cout << "inventory[" << idx << "] is empty." << std::endl;
}
