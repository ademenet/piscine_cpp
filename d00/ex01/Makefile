CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = phonebook

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean: $(OBJ)
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
