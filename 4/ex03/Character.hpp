/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 19:16:30 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:07:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP__
# define __CHARACTER_HPP__

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

# define INVENTORY 4

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		virtual	~Character();
		Character(const Character&);
		Character &operator=(const Character& op);

		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);

		std::string const&	getName() const;
	protected:
	private:
		std::string _name;
		AMateria	*_m[INVENTORY];
		AMateria	*_store[INVENTORY];
};

#endif
