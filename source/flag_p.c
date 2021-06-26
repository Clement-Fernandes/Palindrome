/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** flag_p
*/

#include "palindrome.h"

static void print(arguments_t *args, long long res)
{
    if (res == args->nb_base && args->iterations <= args->imax &&
    args->iterations >= args->imin) {
        base_to_dec(args->palin, args->base);
        printf("%d leads to %d in ", args->palin, args->number);
        printf("%d iteration(s) in base %d\n", args->iterations, args->base);
        args->is_pal = true;
    }
}

static int get_palin(arguments_t *args)
{
    long long rev_nb = 0;
    long long res = dec_to_base(args->palin, args->base);

    print(args, res);
    while (args->iterations <= args->imax && res <= args->nb_base) {
        rev_nb = res;
        rev_nb = my_revnbr(res);
        res = add(res, rev_nb, args->base);
        args->iterations++;
        print(args, res);
    }
    args->iterations = 0;
    return (0);
}

static int iterations(arguments_t *args)
{
    for (; args->palin <= args->nb_base; args->palin++) {
        get_palin(args);
    }
    if (!args->is_pal) {
        printf("no solution\n");
        return (0);
    }
    return (0);
}

int flag_p(arguments_t *args)
{
    args->nb_base = dec_to_base(args->number, args->base);
    if (iterations(args) == 84) {
        return (84);
    }
    return (0);
}