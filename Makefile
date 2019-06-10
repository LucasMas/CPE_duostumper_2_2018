##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile compile lib
##

SRC 	=	src/main.c	\
		src/parsing.c	\
		src/my_strdup.c	\
		src/error_handling.c	\
		src/create_map.c

OBJ 	=	$(SRC:.c=.o)

NAME 	= 	boggle

CFLAGS  = 	-Iinclude -Wextra -W -Wall -g 

all: 	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:  fclean all
