##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC	    =	source/base_to_dec.c	\
			source/check_args.c		\
			source/check_flags.c	\
			source/dec_to_base.c	\
			source/flag_n.c			\
			source/helper.c			\
			source/init_struct.c	\
			source/main.c			\
			source/my_getdigit.c	\
			source/my_intcmp.c		\
			source/my_intlen.c		\
			source/my_pow.c			\
			source/my_revnbr.c		\
			source/palindrome.c		\

OBJ	    =	$(SRC:.c=.o)

NAME	=	palindrome

CFLAGS  =	-Wall -Wextra

CPPFLAGS	=	-I./include/ -I./lib/include/

LDFLAGS	=	-L./lib

LDLIBS	=	-lmy

CC	=	gcc

RM	=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(CFLAGS)

vg:		$(OBJ)
		@$(CC) -g3 -o $(NAME) $(OBJ)
		valgrind --log-file="text" --leak-check=full ./calendar <input
		cat text

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)
	    @rm -f *.c\~
		@rm -f source/*.c\~
	    @rm -f *Makefile~
	    @rm -f include/*.h~
	    @rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re
