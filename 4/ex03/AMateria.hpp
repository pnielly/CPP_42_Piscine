/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:28:51 by user42            #+#    #+#             */
/*   Updated: 2021/08/25 17:59:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"

class	ICharacter;

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		AMateria(AMateria const & op);
		AMateria &operator=(const AMateria& op);

		std::string const & getType() const; // Returns a materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

#endif
