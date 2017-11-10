CC 		=	gcc
CFLAGS 	= 	-W -Wall -Werror -pedantic
RM 		= 	rm -f
NAME 	=	my_ftl
SRC		= 	src/main.c \
	  		src/air_shed.c \
	  		src/bonus_commands.c \
			src/cleanup_game.c \
	  		src/container.c \
			src/game.c \
			src/game_endings.c \
			src/gameplay_1.c \
			src/gameplay_2.c \
			src/input.c \
			src/items.c \
			src/jump.c \
			src/my_display_nbrs.c \
	  		src/my_string.c \
			src/rand.c \
			src/readline.c \
			src/stats.c \
	  		src/system_control.c \
	  		src/system_repair.c \
			src/turns.c \
	  		src/utils.c \


OBJ 	= 	$(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

debug: $(OBJ)
	$(CC) $(CFLAGS) -g3 $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean all re
