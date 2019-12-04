##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile of my_hunter
##

DIR	=	src/

INC_DIR =	include

LIB_DIR =	lib/my/

SRC	=	$(DIR)main.c			\
		$(DIR)constants.c		\
		$(DIR)create_duck.c		\
		$(DIR)create_duck_array.c	\
		$(DIR)create_sprite.c		\
		$(DIR)create_window.c		\
		$(DIR)destroy_sprite.c		\
		$(DIR)game/create_game.c	\
		$(DIR)game/destroy_game.c	\
		$(DIR)game/render_game.c	\
		$(DIR)tools/get_rnd_nbr.c	\
		$(DIR)tools/get_rnd_f_nbr.c

CFLAGS	=	-Wall -Wextra -I ./$(INC_DIR) -I ./$(LIB_DIR)$(INC_DIR) -g

LFLAGS	=	-lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -L $(LIB_DIR) -lmy

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	make fclean -C $(LIB_DIR)
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
