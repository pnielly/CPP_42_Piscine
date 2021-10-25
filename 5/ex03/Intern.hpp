/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 19:11:19 by user42            #+#    #+#             */
/*   Updated: 2021/09/01 20:34:10 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

typedef	AForm	*(*func)(std::string const & target);

AForm	*generateShrub(std::string const & target);
AForm	*generateRob(std::string const & target);
AForm	*generatePresi(std::string const & target);

typedef	struct		s_forms
{
	std::string	formName;
	func		const f;
}			t_forms;

class Intern
{
	public:
		Intern();
		virtual	~Intern();
		Intern(const Intern& src);
		Intern &operator=(const Intern& rhs);

		AForm	*makeForm(std::string const & formName, std::string const & target);
	protected:
	private:
};
#endif

