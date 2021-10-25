# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 22:28:56 by user42            #+#    #+#              #
#    Updated: 2021/08/05 17:26:02 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------- Executable
NAME = fixed
NAME_MORE = fixed_more

# ------------- Commands & Flags
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

# ------------- SRC, OBJ and INC
SRC_PATH = .
HEADER_PATH = .

SRC = Fixed.cpp short_code.cpp
SRC_MORE = Fixed.cpp main.cpp
HEADER = $(addprefix -I $(HEADER_PATH)/, *.hpp)
OBJ = $(SRC:.cpp=.o)
OBJ_MORE = $(SRC_MORE:.cpp=.o)

# ------------- Colors
BLACK:="\033[1;30m"
RED:="\033[1;31m"
GREEN:="\033[1;32m"
PURPLE:="\033[1;35m"
CYAN:="\033[1;36m"
WHITE:="\033[1;37m"
EOC:="\033[0;0m"

# ------------- Rules
all: $(NAME)
	@printf $(GREEN)"\n\n\t\t ${NAME} ready ! \n\n"$(EOC)

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

more: $(NAME_MORE)
	@printf $(GREEN)"\n\n\t\t ${NAME_MORE} ready ! \n\n"$(EOC)

$(NAME_MORE) : $(OBJ_MORE)
	$(CC) $(OBJ_MORE) -o $(NAME_MORE)

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADER) -c $< -o $@

clean:
	@rm -rf $(OBJ) $(OBJ_MORE) $(wildcard *.gch)

fclean: clean
	@rm -rf $(NAME) $(NAME_MORE)

re: fclean all

.PHONY: all clean fclean re
