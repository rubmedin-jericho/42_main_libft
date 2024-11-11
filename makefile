CC = gcc
FLAGS = -Wall -Werror -Wextra
TARGET ?= $(error "TARGET no especificado. Usa: make TARGET=<nombre>")
SOURCE = $(OUT_DIR)$(TARGET).c
MAIN = mains/main_$(TARGET).c 
OBJECTS = src/$(TARGET).o
OUT_DIR = ../
HEADER = ../libft.h 

.PHONY: all clean

all: $(OUT_DIR)$(TARGET)

$(OUT_DIR)$(TARGET): $(OBJECTS) $(MAIN)
	$(CC) $(FLAGS) $(MAIN) $(OBJECTS) -o $(OUT_DIR)$(TARGET)


src/$(TARGET).o: $(SOURCE) $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OUT_DIR)$(TARGET)
	rm -rf $(OBJECTS) 
