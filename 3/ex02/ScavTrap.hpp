/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:15:40 by user42            #+#    #+#             */
/*   Updated: 2021/07/28 20:44:18 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

class ScavTrap : public ClapTrap
{
	public:
	ScavTrap();	
	ScavTrap(std::string name);	
	ScavTrap(const ScavTrap&);
	virtual ~ScavTrap();
	ScavTrap &operator=(const ScavTrap& op);

	void	attack(std::string const & target);
	
	void	guardGate();

	void	_print_player();
};

#endif
