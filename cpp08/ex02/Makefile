CC = c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= MutantStack
FILES = main
RM= rm -rf
HEADER = MutantStack.hpp
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