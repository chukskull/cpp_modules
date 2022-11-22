# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 18:48:17 by snagat            #+#    #+#              #
#    Updated: 2022/11/03 18:49:01 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Sed
FILES =  main
RM= rm -rf
INCLUDE = -I
OBJ= $(FILES:=.o)

all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) ${OBJ}
fclean: clean
	$(RM) $(NAME)
re : fclean all