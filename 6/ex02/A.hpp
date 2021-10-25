/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:57:20 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 11:59:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __A_HPP__
# define __A_HPP__

# include "Base.hpp"

class A: public Base
{
	public:
		A();
		virtual	~A();
		A(const A& src);
		A &operator=(const A& rhs);
	protected:
	private:
};
#endif

