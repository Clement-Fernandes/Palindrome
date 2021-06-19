/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** helper
*/

#include "palindrome.h"

static void print_space(void)
{
    printf("\n      ");
}

static int print_helper(void)
{
    printf("USAGE");
    printf("\n      ./palindrome -n number");
    printf(" -p palindrome [-b base] [-imin i] [-imax i]");
    printf("\n\nDESCRIPTION");
    print_space();
    printf("-n n      integer to be transformed (>=0)");
    printf("\n      -p pal    palindromic number");
    printf(" to be obtained (incompatible with the -n option) (>=0)");
    print_space();
    printf("          if defined, all fitting values of n will be output");
    printf("\n      -b base   base");
    printf(" in which the procedure will be executed (1<b<=10) [def: 10]");
    print_space();
    printf("-imin i   minimum number of iterations, included (>=0) [def: 0]");
    printf("\n      -imax i   maximum");
    printf(" number of iterations, included (>=0) [def: 100]\n");
    return (1);
}

int check_helper(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return (print_helper());
    return (0);
}