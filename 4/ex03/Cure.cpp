/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:53:14 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:39:26 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Default Constructor
Cure::Cure(): AMateria("cure")
{}

// Destructor
Cure::~Cure()
{}

// Copy
Cure::Cure(const Cure& op): AMateria(op)
{}

// Assignment operator overload
Cure& Cure::operator=(const Cure& op)
{
	if (this != &op)
	{
		this->_type = op._type;
	}
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
