/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:48:36 by user42            #+#    #+#             */
/*   Updated: 2021/07/27 09:55:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

# include <iostream>

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		Weapon();
		~Weapon();
		
		const std::string& getType();
		void	setType(std::string type);
};

#endif
