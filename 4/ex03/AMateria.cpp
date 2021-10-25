/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:13:45 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:38:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//Constructor
AMateria::AMateria(void):
	_type("Unknown")
{}

//Init constructor
AMateria::AMateria(std::string const & type):
	_type(type)
{}

//Copy
AMateria::AMateria(AMateria const & op)
{
	*this = op;
}

//Assignment operator overload
AMateria&	AMateria::operator=(AMateria const & op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

//Destructor
AMateria::~AMateria(void)
{}

void	AMateria::use(ICharacter & target)
{
	std::cout << "Using AMateria base: " << target.getName() << std::endl;
}

//getType()
std::string const &	AMateria::getType() const
{
	return (this->_type);
}
