# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 18:35:04 by snagat            #+#    #+#              #
#    Updated: 2022/11/18 14:26:38 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= whatever
FILES = main 
RM= rm -rf
HEADER = whatever.hpp
OBJ= $(FILES:=.o)

all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) ${OBJ}
fclean: clean
	$(RM) $(NAME)
re : fclean all