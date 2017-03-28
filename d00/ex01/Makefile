CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = phonebook

SRC_NAME = main.cpp

OBJ_NAME = $(SRC_NAME:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC_NAME)
	$(CC) $(FLAGS) $(OBJ_NAME) -o $(NAME)

clean:
	rm -rf $(OBJ_NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all
