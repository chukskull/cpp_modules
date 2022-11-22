# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snagat <snagat@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/09 11:39:22 by snagat            #+#    #+#              #
#    Updated: 2022/11/15 16:22:04 by snagat           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= Bureaucrat
FILES =  main Bureaucrat Form ShrubberyCreationForm PresidentialPardonForm RobotomyRequestForm \
		Intern
RM= rm -rf
INCLUDE = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp \
		PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

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
re : fclean all%
