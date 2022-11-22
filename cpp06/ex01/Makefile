# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 18:35:04 by snagat            #+#    #+#              #
#    Updated: 2022/11/17 16:24:27 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Convert
FILES = main serial serial_c_
RM= rm -rf
HEADER = serial.hpp
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