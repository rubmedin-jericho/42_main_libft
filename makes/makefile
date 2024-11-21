CC = gcc
FLAGS = -Wall -Werror -Wextra
OUT_DIR = ../../
HEADER = ../../libft.h 
DIR = src
EXEC = ../auto_42_main.c
NAME = mains
TARGET ?= $(error "TARGET no especificado. Usa: make TARGET=<nombre>")
SOURCE = $(OUT_DIR)$(TARGET).c
MAIN = ../mains/main_$(TARGET).c 
OBJECTS = ../src/$(TARGET).o

.PHONY: all clean clean_all

all: $(DIR) $(OUT_DIR)$(TARGET)

$(OUT_DIR)$(NAME): $(HEADER) $(EXEC)
	$(CC) $(FLAGS) $(EXECT) -o $(NAME)

$(DIR):
	@cd .. && mkdir -p $(DIR)

../src/$(TARGET).o: $(SOURCE) $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(OUT_DIR)$(TARGET): $(OBJECTS) $(MAIN)
	$(CC) $(FLAGS) $(MAIN) $(OBJECTS) -o $(OUT_DIR)$(TARGET)

clean_all:
	rm -rf $(OUT_DIR)$(TARGET) ../$(DIR)

clean:
	rm -rf $(OUT_DIR)$(TARGET)
	rm -rf $(OBJECTS)
