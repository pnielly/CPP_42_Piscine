/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:39:48 by user42            #+#    #+#             */
/*   Updated: 2021/08/10 21:54:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string	_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	virtual ~ClapTrap();
	ClapTrap &operator=(const ClapTrap& op);
	
	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

//	my functions:
	void	_print_player(void);
	unsigned int	getDamage();
	unsigned int	getEnergy();
};

#endif
