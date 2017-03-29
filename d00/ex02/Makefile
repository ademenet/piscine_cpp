FLAG = -Wall -Wextra -Werror

NAME = test

SRC = Account.class.cpp \
	test.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		@clang++ $(FLAG) -o $@ $^ -lncurses
		@echo "$(NAME) created"

%.o:%.cpp
		@clang++ $(FLAG) -c -o $@ $<

clean:
		@rm -f $(OBJ)
		@echo "OBJ deleted"

fclean: clean
		@rm -f $(NAME)
		@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re
