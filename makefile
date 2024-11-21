CC = gcc
FLAGS = -Wall -Werror -Wextra
SOURCE = auto_42_main.c
NAME = ../mains_libft

.PHONY: all clean

all: $(NAME)

$(NAME): $(SOURCE)
	$(CC) $(FLAGS) $(SOURCE) -o $(NAME)

clean:
	rm -rf $(NAME)
