##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## nope
##

SRC		=	$(wildcard *.c)

OBJ 	= 	$(SRC:.c=.o)

NAME 	= 	libmy.a

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

clean:
			rm *.o

fclean:
			rm -f $(NAME)
