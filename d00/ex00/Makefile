.PHONY: all clean fclean re

CC = clang++
FLAGS = -Wall -Wextra -Werror
NAME = megaphone

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c megaphone.cpp
	$(CC) $(FLAGS) megaphone.o -o megaphone

clean:
	rm -rf megaphone.o

fclean: clean
	rm -rf megaphone

re: fclean all
