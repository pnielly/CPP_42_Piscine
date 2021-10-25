/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/01 19:26:22 by user42            #+#    #+#             */
/*   Updated: 2021/08/11 21:38:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// default constructor
Brain::Brain()
{
	std::cout << "Brain constructed" << std::endl;
}

//destructor
Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
}

//copy
Brain::Brain(const Brain& op)
{
	for (int i = 0;i < 100;i++)
	{
		this->_ideas[i] = op._ideas[i];
	}
	std::cout << "Brain copied" << std::endl;
}

// assignment operator overload
Brain & Brain::operator=(const Brain& op)
{
	if (this != &op)
	{
		for (int i = 0;i < 100;i++)
		{
			this->_ideas[i] = op._ideas[i];
		}
	}
	return *this;
}

//setters
void	Brain::setIdeas(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

//getters
std::string	Brain::getIdeas(int i)
{
	return (this->_ideas[i]);
}
