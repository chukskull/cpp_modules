# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 14:52:05 by snagat            #+#    #+#              #
#    Updated: 2022/11/02 14:53:27 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= g++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= main
FILES = main
RM= rm -rf
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