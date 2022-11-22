# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 18:48:17 by snagat            #+#    #+#              #
#    Updated: 2022/11/03 18:48:23 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Violence
FILES =  main HumanA HumanB Weapon
RM= rm -rf
INCLUDE = -I
HEADER = Weapon.hpp HumanA.hpp HumanB.hpp
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