/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 20:16:57 by user42            #+#    #+#             */
/*   Updated: 2021/09/24 10:33:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <iostream>
# include <stack>
# include <deque>
# include <list>

// template with T and Container otherwise std::stack is not recognized as a class
template< typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public:
		MutantStack(void): std::stack<T, Container>() {}
		virtual	~MutantStack() {}
		MutantStack(const MutantStack& src) { *this = src; }
		MutantStack &operator=(const MutantStack& rhs)
		{
			if (*this != rhs)
				std::stack<T, Container>::operator=(rhs);
			return (*this);
		}

		// typedef = alias 
		typedef typename std::stack<T, Container>::container_type::iterator	iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator reverse_iterator;
		// c is the underlying container (see member object in std::stack on cpp reference)
		iterator	begin(void) { return std::stack<T, Container>::c.begin(); };
		iterator	end(void) { return std::stack<T, Container>::c.end(); };
		
		reverse_iterator	rbegin(void) { return std::stack<T, Container>::c.rbegin(); };
		reverse_iterator	rend(void) { return std::stack<T, Container>::c.rend(); };
	protected:
	private:
};

template <typename T>
void	print(T const & elem)
{
	std::cout << elem << std::endl;
}

#endif
