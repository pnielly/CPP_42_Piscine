/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 09:02:28 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 20:34:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap&);
		virtual ~FragTrap();
		FragTrap &operator=(const FragTrap& op);

		void	highFiveGuys();

		void	print_player();

		//setters
		void	setEnergypoints();
		void	setHitpoints();
		void	setAttackdamage();
};

# endif
