/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** flag_n
*/

#include "palindrome.h"

static int check_palindrome(arguments_t *args, int res)
{
    int rev_res = my_revnbr(res);

    args->iterations += 1;
    if (my_intcmp(res, rev_res) == 0) {
        args->is_pal = true;
        printf("%d leads to %d in ", args->number, res);
        printf("%d iteration(s) in base %d\n", args->iterations, args->base);
        return (1);
    }
    return (0);
}

static int iterations(arguments_t *args, int nb)
{
    int rev_nb = 0;
    int res = 0;

    while (args->is_pal == false) {
        rev_nb = my_revnbr(nb);
        res = nb + rev_nb;
        check_palindrome(args, res);
        nb = res;
    }
    return (0);
}

static int verify_first(arguments_t *args, int nb)
{
    int rev_nb = my_revnbr(nb);

    if (my_intcmp(nb, rev_nb) == 0) {
        printf("%d leads to %d in ", args->number, args->number);
        printf("%d iteration(s) in base %d\n", args->iterations, args->base);
        return (1);
    }
    return (0);
}

int flag_n(arguments_t *args)
{
    if (verify_first(args, args->number) == 1)
        return (1);
    iterations(args, args->number);
    return (0);
}