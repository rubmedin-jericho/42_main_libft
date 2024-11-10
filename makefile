CC = gcc
FLAGS = -Wall -Werror -Wextra
SOURCE = ../ft_memset.c
TARGET ?= $(error "TARGET no especificado. Usa: make TARGET=<nombre>")
MAIN = main_$(TARGET).c 
OBJECTS = $(SOURCE:.c=.o) $(MAIN:.c=.o)
OUT_DIR = ../
HEADER = ../libft.h 

.PHONY: all clean

all: $(OUT_DIR)/$(TARGET)
	
%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

$(OUT_DIR)/$(TARGET): $(OBJECTS)
	$(CC) $(FLAGS) -o $@ $^

clean:
	rm -rf $(OUT_DIR)/$(TARGET)
	rm -rf $(OBJECTS)
