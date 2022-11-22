# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 09:23:01 by snagat            #+#    #+#              #
#    Updated: 2022/11/02 12:57:24 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= g++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Zombie
FILES = Zombie main zombieHorde
RM= rm -rf
INCLUDE = -I
HEADER = Zombie.hpp
OBJ= $(FILES:=.o)

all : $(NAME)
$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) ${OBJ}
fclean: clean
	$(RM) $(NAME)
re : fclean all