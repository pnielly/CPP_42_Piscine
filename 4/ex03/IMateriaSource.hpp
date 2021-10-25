/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 01:57:30 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:08:24 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIA_HPP__
# define __IMATERIA_HPP__

#include "AMateria.hpp"
#include <iostream>

# define INVENTORY 4

class IMateriaSource
{
	public: 
		virtual	~IMateriaSource() {};
		virtual	void	learnMateria(AMateria*) = 0;
		virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif
