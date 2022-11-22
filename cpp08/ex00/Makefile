CC = c++
FLAGS= -Wall -Wextra -Werror -std=c++98
NAME= easyfind
FILES = main 
RM= rm -rf
HEADER = easyfind.hpp
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