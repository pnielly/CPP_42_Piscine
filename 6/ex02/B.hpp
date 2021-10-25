/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:57:36 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 11:59:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __B_HPP__
# define __B_HPP__
 
# include "Base.hpp"

class B: public Base
{
	public:
		B();
		virtual	~B();
		B(const B& src);
		B &operator=(const B& rhs);
	protected:
	private:
};
#endif
