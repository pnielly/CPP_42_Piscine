/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 23:16:50 by user42            #+#    #+#             */
/*   Updated: 2021/08/26 17:07:31 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

# define INVENTORY 4

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		virtual	~MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource &operator=(const MateriaSource& op);

		void	learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);
	protected:
	private:
		std::string	_name;
		AMateria	*_m[INVENTORY];
};
#endif

