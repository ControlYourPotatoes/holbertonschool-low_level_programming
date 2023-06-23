# Makefile

# Compiler
CC := gcc

# Compiler flags
CFLAGS := -Wall -Wextra -Werror -Wextra -std=gnu89

# Prompt for the file to compile with tab completion
.PHONY: all
all:
	@filename=$$(compgen -f -X '!*.c' | readline -e); \
	$(CC) $(CFLAGS) -o output "$$filename"

