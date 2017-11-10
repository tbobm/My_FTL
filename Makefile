CC 		=	gcc
CFLAGS 	= 	-W -Wall -Werror -pedantic
RM 		= 	rm -f
NAME 	=	my_ftl
SRC		= 	src/main.c \
	  		src/my_string.c \
	  		src/readline.c \
	  		src/air_shed.c \
	  		src/container.c \
	  		src/utils.c \
	  		src/bonus_commands.c \
	  		src/system_control.c \
	  		src/system_repair.c

OBJ 	= 	$(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean all re
