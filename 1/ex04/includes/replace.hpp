/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 19:24:48 by user42            #+#    #+#             */
/*   Updated: 2021/03/05 23:02:00 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <string>
# include <sys/stat.h>
# include <fstream>
# include <sstream>

# define SUCCESS 0
# define EMPTY_STRING 1
# define INVALID_ARGS_COUNT 2
# define NO_FILE 3

int	ft_error(int err_num);

#endif
