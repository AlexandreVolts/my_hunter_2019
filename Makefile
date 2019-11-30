DIR	=	src/

INC_DIR =	include

LIB_DIR =	lib/my/

SRC	=	$(DIR)main.c			\

CFLAGS	=	-Wall -Wextra -I ./$(INC_DIR) -I ./$(LIB_DIR)$(INC_DIR)

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
