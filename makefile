CC = gcc
FLAGS = -Wall -Werror -Wextra
TARGET ?= $(error "TARGET no especificado. Usa: make TARGET=<nombre>")
SOURCE = $(OUT_DIR)$(TARGET).c
MAIN = mains/main_$(TARGET).c 
OBJECTS = src/$(TARGET).o
OUT_DIR = ../
HEADER = ../libft.h 
DIR = src
EXEC = auto_42_main.c
NAME = mains

.PHONY: all clean

all: $(NAME) $(DIR) $(OUT_DIR)$(TARGET)

$(OUT_DIR)$(NAME): $(HEADER) $(EXEC)
	$(CC) $(FLAGS) $(EXECT) -o $(NAME)

$(DIR):
	mkdir -p $(DIR)

$(OUT_DIR)$(TARGET): $(OBJECTS) $(MAIN)
	$(CC) $(FLAGS) $(MAIN) $(OBJECTS) -o $(OUT_DIR)$(TARGET)


src/$(TARGET).o: $(SOURCE) $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OUT_DIR)$(TARGET)
	rm -rf $(OBJECTS) 
