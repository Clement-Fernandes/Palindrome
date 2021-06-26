/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** palindrome
*/

#ifndef CALENDAR_H_
#define CALENDAR_H_

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>

typedef struct arguments_s
{
    int number;
    long long nb_base;
    int palin;
    int value;
    int base;
    int imin;
    int imax;
    int iterations;
    bool is_pal;
    bool flag_b;
    bool flag_imin;
    bool flag_imax;
}arguments_t;

/*Init the structure*/
arguments_t *init_struct(void);

/*Principal function*/
int palindrome(char const **av);

/*Check arguments*/
int check_helper(int ac, char const **av);
int check_args(char const **av, arguments_t *args);
int check_flag_n(arguments_t *args, int nb, char const **av);
int check_flag_p(arguments_t *args, int nb, char const **av);
int check_options(arguments_t *args, char const **av);

/*Minilib functions*/
int my_intcmp(int nb1, int nb2);
int my_intlen(int nb);
int my_pow(int nb, int pow);
int my_revnbr(int nb);
int my_getdigit(int nb, int place);

/*Base converters*/
int base_to_dec(long long nb, int base);
long long dec_to_base(long long nb, int base);

/*Flags of the program*/
int flag_n(arguments_t *args);
int flag_p(arguments_t *args);
int flag_b(arguments_t *args, char const **av, int i);
int flag_imin(arguments_t *args, char const **av, int i);
int flag_imax(arguments_t *args, char const **av, int i);

/*Rest*/
int is_palindromic(arguments_t *args, int nb);
long long add(int nb1, int nb2, int base);
int is_digit(char const *str);

#endif /* !CALENDAR_H_ */
