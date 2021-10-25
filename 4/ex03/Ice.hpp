/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:14:53 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:14:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ICE_HPP__
# define __ICE_HPP__

#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		virtual	~Ice();
		Ice(const Ice&);
		Ice &operator=(const Ice& op);

		AMateria	*clone() const;
		void		use(ICharacter& target);
	protected:
	private:
};
#endif

