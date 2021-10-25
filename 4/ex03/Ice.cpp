/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:14:44 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:39:08 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

// Default Constructor
Ice::Ice(): AMateria("ice")
{}

// Destructor
Ice::~Ice()
{}

// Copy
Ice::Ice(const Ice& op): AMateria(op)
{}

// Assignment operator overload
Ice& Ice::operator=(const Ice& op)
{
	if (this != &op)
	{
		this->_type = op._type;
	}
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
