# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 18:35:04 by snagat            #+#    #+#              #
#    Updated: 2022/11/18 10:40:22 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Identify
FILES = main A B C Base
RM= rm -rf
HEADER = A.hpp B.hpp C.hpp Base.hpp
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