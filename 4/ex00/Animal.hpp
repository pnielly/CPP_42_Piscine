/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:04:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/11 14:32:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

#include <iostream>

class Animal
{
	private:

	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal&);
		Animal &operator=(const Animal& op);
		
		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

class Dog: public Animal
{
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog&);
		Dog &operator=(const Dog& op);

		virtual std::string	getType() const;
		virtual void	makeSound() const;	
};

class Cat: public Animal
{
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat&);
		Cat &operator=(const Cat& op);

		virtual std::string	getType() const;
		virtual void	makeSound() const;
};

#endif
