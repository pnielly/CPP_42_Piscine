/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 11:58:11 by user42            #+#    #+#             */
/*   Updated: 2021/09/17 12:00:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __C_HPP__
# define __C_HPP__
 
# include "Base.hpp"

class C: public Base
{
	public:
		C();
		virtual	~C();
		C(const C& src);
		C &operator=(const C& rhs);
	protected:
	private:
};
#endif
