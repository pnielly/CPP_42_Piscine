/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:22:21 by user42            #+#    #+#             */
/*   Updated: 2021/09/15 17:44:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Default Constructor
MateriaSource::MateriaSource()
{
	for (int i = 0; i < INVENTORY; i++)
		this->_m[i] = NULL;
}

// Destructor
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_m[i] != NULL)
			delete this->_m[i];
		this->_m[i] = NULL;
	}
}

// Copy
MateriaSource::MateriaSource(const MateriaSource& op)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (op._m[i])
			this->_m[i] = op._m[i]->clone();
		else
			this->_m[i] = NULL;
	}
}

// Assignment operator overload
MateriaSource& MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_m[i])
			delete this->_m[i];
		if (op._m[i])
			this->_m[i] = op._m[i]->clone();
		else
			this->_m[i] = NULL;
	}
	return (*this);
}

// ex functions :
void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
	{
		std::cout << "Materia doesn't exists..." << std::endl;
		return ;
	}
	for (int i = 0; i < INVENTORY; i++)
	{
		if (!this->_m[i])
		{
			std::cout << "Analyzing " << m->getType() << "." << std::endl;
			this->_m[i] = m;
			return ;
		}
	}
	std::cout << "Can't analyze " << m->getType() << ", Source is full." << std::endl;
	delete m; // if source is full, can't keep in memory
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INVENTORY; i++)
	{
		if (this->_m[i] != NULL && this->_m[i]->getType() == type)
		{
			std::cout << "Creating " << this->_m[i]->getType() << "." << std::endl;
			return this->_m[i]->clone();
		}
	}
	std::cout << "Unkown type" << std::endl;
	return NULL;
}
