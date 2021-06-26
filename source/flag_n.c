/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** flag_n
*/

#include "palindrome.h"

static int check_palindrome(arguments_t *args, long long res)
{
    long long rev_res = my_revnbr(res);

    args->iterations += 1;
    if (args->iterations > args->imax) {
        args->is_pal = true;
        printf("no solution\n");
        return (0);
    }
    if (my_intcmp(res, rev_res) == 0 && args->iterations <= args->imax
    && args->iterations >= args->imin) {
        args->is_pal = true;
        res = base_to_dec(res, args->base);
        printf("%d leads to %lld in ", args->number, res);
        printf("%d iteration(s) in base %d\n", args->iterations, args->base);
        return (1);
    }
    return (0);
}

static int iterations(arguments_t *args, int nb)
{
    int rev_nb = 0;
    long long res = 1;

    while (args->is_pal == false) {
        rev_nb = my_revnbr(nb);
        res = add(nb, rev_nb, args->base);
        if (res <= 0) {
            printf("no solution\n");
            return (0);
        }
        check_palindrome(args, res);
        nb = res;
    }
    return (0);
}

static int verify_first(arguments_t *args, long long nb)
{
    long long rev_nb = my_revnbr(nb);

    if (my_intcmp(nb, rev_nb) == 0 && args->iterations <= args->imax
    && args->iterations >= args->imin) {
        printf("%d leads to %d in ", args->number, args->number);
        printf("%d iteration(s) in base %d\n", args->iterations, args->base);
        return (1);
    }
    return (0);
}

int flag_n(arguments_t *args)
{
    args->nb_base = dec_to_base(args->number, args->base);
    if (verify_first(args, args->nb_base) == 1)
        return (1);
    if (iterations(args, args->nb_base) == 84) {
        return (84);
    }
    return (0);
}