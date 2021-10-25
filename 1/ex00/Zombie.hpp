/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 12:51:49 by user42            #+#    #+#             */
/*   Updated: 2021/07/26 18:30:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(std::string name);
		~Zombie(void);
		
		void	announce() const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
