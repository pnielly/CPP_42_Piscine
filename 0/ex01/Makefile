# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/27 22:54:28 by user42            #+#    #+#              #
#    Updated: 2021/03/05 22:36:10 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

FLAGS           = -Wall -Wextra -Werror
CC		= clang++

SRC_PATH	= src
HEADER_PATH	= includes

SRC		= $(wildcard $(SRC_PATH)/*.cpp)
HEADER		= $(addprefix -I $(HEADER_PATH)/, Phonebook.hpp Contact.hpp)
OBJ		= $(SRC:.cpp=.o)

NC=\033[0;0m
GREEN=\033[3;32m
BLINK=\e[5m

all: $(NAME)
	@echo "\n\n\t\t ${GREEN}${NAME} ready !${NC}\n\n"

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADER) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
