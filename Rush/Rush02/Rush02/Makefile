# Compiler settings
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source files
MAIN = main.c
SRCS_DIR = srcs/
OBJS_DIR = objs/
SRCS = $(addprefix $(SRCS_DIR),main.c)
OBJS = $(SRCS:$(SRCS_DIR)%.c=$(OBJS_DIR)%.o)
INCLUDES_DIR=includes

# Output executable
PROG = bsq

all: $(PROG)

test: srcs/test.c srcs/searcher.c srcs/print_table.c srcs/file.c srcs/parser.c srcs/string.c
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $^ -o $@ -g

$(PROG): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	$(CC) $(CFLAGS) -c $^ -o $@

re: clean all

clean:
	rm -f $(OBJS_DIR)*.o

fclean: clean
	rm -f $(PROG)
	rm -f test

.PHONY: all clean test re fclean
