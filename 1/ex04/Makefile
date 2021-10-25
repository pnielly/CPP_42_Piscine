# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 22:28:56 by user42            #+#    #+#              #
#    Updated: 2021/07/31 11:12:42 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Wextra -Werror
CC = clang++

SRC_PATH = src
HEADER_PATH = includes

SRC = $(wildcard $(SRC_PATH)/*.cpp)
HEADER = $(addprefix -I $(HEADER_PATH)/, replace.hpp)
OBJ = $(SRC:.cpp=.o)

# ------------- Colors
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
PURPLE:="\033[1;35m"
CYAN:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"

# -------------- Rules

all: $(NAME)
	@printf $(GREEN)"\n\n\t\t replace ready ! \n\n"$(EOC)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADER) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
