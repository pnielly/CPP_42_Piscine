/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:30:13 by user42            #+#    #+#             */
/*   Updated: 2021/09/20 12:07:25 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <iostream>
# include <exception>
# include <algorithm>
# include <iterator>

# include <list>
# include <vector>

//EXCEPTIONS
struct	NoSuchElementException: public std::exception
{
	virtual char const	*what() const throw();
};


// easyfind() : find the first element of container of type T equal to int i
template <typename T>
int	easyfind( T container, int const i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (it != container.end())
		return *it;
	throw NoSuchElementException();
}

// cleanfind() : this intermediate function exists to avoid a main full of try/catch
template <typename T>
void	cleanfind( T container, int const i)
{
	try {
		std::cout << "To find : " << i << std::endl;
		std::cout << "Result : " << easyfind(container, i) << std::endl;
	}
	catch (NoSuchElementException & e)
	{
		std::cout << e.what() << std::endl;
	}
}

#endif
