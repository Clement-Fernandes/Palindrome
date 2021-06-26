##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC_MAIN	=	source/main.c		\

SRC	    =	source/add.c			\
			source/base_to_dec.c	\
			source/check_args.c		\
			source/check_flags.c	\
			source/check_option.c	\
			source/dec_to_base.c	\
			source/flag_options.c	\
			source/flag_n.c			\
			source/flag_p.c			\
			source/helper.c			\
			source/init_struct.c	\
			source/is_digit.c		\
			source/is_palindromic.c	\
			source/my_getdigit.c	\
			source/my_intcmp.c		\
			source/my_intlen.c		\
			source/my_pow.c			\
			source/my_revnbr.c		\
			source/palindrome.c		\

SRC_TESTS	=    tests/test.c    \

MAIN_OBJ	=    $(SRC_MAIN:.c=.o)

OBJ			=    $(SRC:.c=.o)

TEST_OBJ	=    $(SRC_TESTS:.c=.o)

CC			=    gcc

INC			= -I include/

CFLAGS		= -W -Wall -Wextra

CPPFLAGS	=    $(INC)

NAME		=    palindrome

TEST_NAME	=    unit_tests

RM			=	rm -f

all:	$(NAME)

$(NAME): $(MAIN_OBJ) $(OBJ)
	$(CC) -o $(NAME) $(MAIN_OBJ) $(OBJ) $(CFLAGS) $(CPPFLAGS)
	@tput setaf 5; cat include/signature; tput sgr0

clean:
	rm -f $(MAIN_OBJ)
	rm -f $(OBJ)
	rm -f $(TEST_OBJ)

fclean:    clean
	$(RM) *.c\~
	$(RM) source/*.c\~
	$(RM) source/*.gcda
	$(RM) source/*.gcno
	$(RM) tests/*.gcda
	$(RM) tests/*.gcno
	$(RM) *Makefile~
	$(RM) include/*.h~
	$(RM) $(NAME)
	$(RM) $(TEST_NAME)
	clear

re:    fclean all

tests_run: all
tests_run: CFLAGS += --coverage
tests_run: LDFLAGS += -lcriterion -DUNIT_TEST
tests_run: $(OBJ) $(TEST_OBJ)
	$(CC) -o $(TEST_NAME) $(OBJ) $(TEST_OBJ) $(LDFLAGS) $(CFLAGS) $(CPPFLAGS)
	./$(TEST_NAME) && gcovr

.PHONY:	all $(NAME) clean fclean re tests_run
