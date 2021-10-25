/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:28:22 by user42            #+#    #+#             */
/*   Updated: 2021/09/21 13:45:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <algorithm>
# include <vector>
# include <iterator>
# include <time.h>

class Span
{
	public:
		// Coplian Class
		Span(unsigned int const N);
		virtual	~Span();
		Span(const Span& src);
		Span &operator=(const Span& rhs);

		//ex01 functions
		void	addNumber(int toAdd);
		void	addNumber(unsigned int from, unsigned int to);

		int	shortestSpan(void);
		int	longestSpan(void);
		
		//display a vector
		void	display(void);

		//exceptions
		class MaxSizeReachedException: public std::exception
		{
		public:
			virtual char const	*what() const throw();
		};

		class TooSmallException: public std::exception
		{
		public:
			virtual char const	*what() const throw();
		};
		
		class ForbiddenAccessException: public std::exception
		{
		public:
			virtual char const	*what() const throw();
		};

		class IllogicalParamException: public std::exception
		{
		public:
			virtual char const	*what() const throw();
		};

	protected:
	private:
		Span(); // default constructor is in private to prevent its use.
		unsigned int		_size_max;
		std::vector<int>	_vec;
};

#endif
