.PHONY: all clean fclean re

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = phonebook

SRC =	main.cpp\
		Contact.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

%.o:%.cpp
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
