# Makefile

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -O2

# Prompt for the file to compile
.PHONY: all
all:
	@read -p "Enter the filename to compile: " filename; \
	$(CC) $(CFLAGS) -o output "$$filename"

