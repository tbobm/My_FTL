CFLAGS = -W -Wall -Werror -pedantic
CC = gcc
RM = rm -f
NAME = ftl
SRC	= main.c \
	  air_shed.c

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
