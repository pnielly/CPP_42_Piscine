# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <pnielly@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/05 22:28:56 by user42            #+#    #+#              #
#    Updated: 2021/07/28 17:43:59 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ------------- Executable
NAME = karen

# ------------- Commands & Flags
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = clang++

# ------------- SRC, OBJ and INC
SRC_PATH = .
HEADER_PATH = .

SRC = $(wildcard $(SRC_PATH)/*.cpp)
HEADER = $(addprefix -I $(HEADER_PATH)/, *.hpp)
OBJ = $(SRC:.cpp=.o)

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
	@printf $(GREEN)"\n\n\t\t karen ready ! \n\n"$(EOC)

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
