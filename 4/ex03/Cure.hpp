/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 17:15:49 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:14:07 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CURE_HPP__
# define __CURE_HPP__

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		virtual	~Cure();
		Cure(const Cure&);
		Cure &operator=(const Cure& op);

		AMateria	*clone() const;
		void		use(ICharacter& target);
	protected:
	private:
};
#endif
