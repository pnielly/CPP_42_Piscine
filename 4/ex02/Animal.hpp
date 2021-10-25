/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 08:04:23 by user42            #+#    #+#             */
/*   Updated: 2021/08/12 14:33:56 by user42           ###   ########.fr       */
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
		Animal(std::string type);
		virtual ~Animal();
		Animal(const Animal&);
		Animal &operator=(const Animal& op);
		
		virtual std::string	getType() const;
		virtual void	makeSound() const = 0;
};

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain&);
		Brain &operator=(const Brain& op);

		void	setIdeas(int i, std::string idea);
		std::string	getIdeas(int i);
};

class Dog: public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog&);
		Dog &operator=(const Dog& op);

		virtual std::string	getType() const;
		virtual void	makeSound() const;	
		virtual	Brain	*getBrain();
};

class Cat: public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat&);
		Cat &operator=(const Cat& op);

		virtual std::string	getType() const;
		virtual void	makeSound() const;
		virtual	Brain	*getBrain();
};

#endif
