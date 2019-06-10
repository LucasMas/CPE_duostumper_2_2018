##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile compile lib
##

SRC 	=	src/main.c	\

OBJ 	=	$(SRC:.c=.o)

NAME 	= 	

CFLAGS  = 	-Iinclude -Wextra -W -Wall

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:  fclean all
