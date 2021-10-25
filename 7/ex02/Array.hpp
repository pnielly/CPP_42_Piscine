/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:50:58 by user42            #+#    #+#             */
/*   Updated: 2021/09/19 15:00:39 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <exception> 
# include <stdlib.h>
# include <time.h>

template <typename T> 
class Array
{
	public:
		// default constructor
		Array<T>():
			_array(new T[0]),
			_size(0)
		{}
		
		// init constructor
		Array<T>(unsigned int n):
			_array(new T[n]),
			_size(n)
		{
			T * a = new T();
			for (unsigned int i = 0; i < n; i++)
				this->_array[i] = *a;
			delete a;
		}

		// destructor
		virtual	~Array<T>()
		{
			if (this->_array)
				delete[] this->_array;
		}

		// copy constructor
		Array<T>(const Array& src)
		{
			this->_array = new T[src.getSize()];
			this->_size = src.getSize();
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
		}
		
		// Assignment operator overload
		Array &operator=(Array& rhs)
		{
			if (*this == rhs)
				return *this;
			
			if (this->_array)
				delete[] this->_array;
			Array *tmp = new T[rhs.getSize()];
			this->_size = rhs.getSize();
			for (size_t i = 0; i < this->_size; i++)
				this->_array[i] = rhs._array[i];

			return *this;
		}

		// [] operator overload
		T	&operator[](unsigned int i)
		{
			if (i >= this->_size)
				throw std::exception();
			return this->_array[i];
		}

		// Getters
		unsigned int const & getSize(void) const 
		{
			return this->_size;
		}

	protected:
	private:
		T *_array;
		unsigned int _size;
};

#endif
