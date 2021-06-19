/*
** EPITECH PROJECT, 2021
** B-CPE-210-PAR-2-1-redemption-jimy.xu
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
    int base;
    int imin;
    int imax;
    int iterations;
    bool is_pal;
}arguments_t;

/*Init the structure*/
arguments_t *init_struct(void);

/*Principal function*/
int palindrome(char **av);

/*Check arguments*/
int check_helper(int ac, char **av);
int check_args(char **av, arguments_t *args);
arguments_t *check_flag_n(arguments_t *args, int nb, char **av);
arguments_t *check_flag_p(arguments_t *args, int nb, char **av);

/*Minilib functions*/
int my_intcmp(int nb1, int nb2);
int my_intlen(int nb);
int my_pow(int nb, int pow);
int my_revnbr(int nb);

/*Principal flags*/
int flag_n(arguments_t *args);

#endif /* !CALENDAR_H_ */
