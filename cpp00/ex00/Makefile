# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 11:54:19 by snagat            #+#    #+#              #
#    Updated: 2022/11/04 11:54:24 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= megaphone
FILES = megaphone
RM= rm -rf
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