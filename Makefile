CFLAGS = -W -Wall -Werror -pedantic
CC = gcc
RM = rm -f
NAME = ftl
SRC	= src/main.c \
	  src/my_string.c \
	  src/readline.c \
	  src/air_shed.c 

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean
