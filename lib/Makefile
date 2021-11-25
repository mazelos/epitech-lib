##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## nope
##


SRC     =   $(shell find . -name *.c)

OBJ 	= 	$(SRC:.c=.o)

NAME 	= 	libmy.a

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ) $(FLAGS)

all: 		$(NAME) clean

clean:
			find . -name *.o -type f -delete

fclean:		clean
			rm -f $(NAME)

re:			fclean all
