/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 20:03:16 by user42            #+#    #+#             */
/*   Updated: 2021/07/31 11:06:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMBNB_HPP__
# define __HUMBNB_HPP__

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		
		void	attack();
		void	setWeapon(Weapon *weapon);
};

#endif
