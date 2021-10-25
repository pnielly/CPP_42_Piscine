/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:04:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/01 17:15:58 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

#include <iostream>

class WrongAnimal
{
	private:

	protected:
		std::string _type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal &operator=(const WrongAnimal& op);
		
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

class WrongDog: public WrongAnimal
{
	public:
		WrongDog();
		virtual ~WrongDog();
		WrongDog(const WrongDog&);
		WrongDog &operator=(const WrongDog& op);

		virtual std::string	getType() const;
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		virtual ~WrongCat();
		WrongCat(const WrongCat&);
		WrongCat &operator=(const WrongCat& op);

		virtual std::string	getType() const;
};

#endif
