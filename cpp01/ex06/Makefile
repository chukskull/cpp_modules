# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 18:48:17 by snagat            #+#    #+#              #
#    Updated: 2022/11/04 19:28:44 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= harlFilter
FILES =  main Harl 
RM= rm -rf
INCLUDE = Harl.hpp

OBJ= $(FILES:=.o)

all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(INCLUDE)
	$(CC) $(FLAGS) -c $< -o $@
clean:
	$(RM) ${OBJ}
fclean: clean
	$(RM) $(NAME)
re : fclean all