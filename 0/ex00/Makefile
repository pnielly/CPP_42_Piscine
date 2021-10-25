# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/13 10:28:29 by user42            #+#    #+#              #
#    Updated: 2021/02/27 22:56:17 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

NC=\033[0;0m
GREEN=\033[3;32m
BLINK=\e[5m

all: $(NAME)
	@echo "\n\n\t\t ${GREEN}${NAME} ready !${NC}\n\n"

$(NAME) : $(OBJ)
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)

tester:
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
