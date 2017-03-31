.PHONY: all clean fclean re

CC = clang++

FLAG = -Wall -Wextra -Werror

NAME = test

SRC =	Account.class.cpp \
		test.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAG) -o $@ $^

%.o:%.cpp
	$(CC) $(FLAG) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
