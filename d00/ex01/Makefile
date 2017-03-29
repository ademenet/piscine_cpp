CC = clang++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC =	main.cpp\
		Contact.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
