/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** flag_p
*/

#include "palindrome.h"

static int check_palindrome(arguments_t *args, int res)
{
    int rev_res = my_revnbr(res);

    printf("%d  %d\n", res, rev_res);
    args->iterations += 1;
    if (my_intcmp(res, args->number) == 0) {
        args->is_pal = true;
        printf("%d leads to %d in ", args->value, args->number);
        printf("%d iteration(s) in base %d\n", args->iterations, args->base);
    }
    return (0);
}

static int iterations(arguments_t *args, int nb)
{
    int rev_value = 0;
    int res = 0;

    // while (res != nb) {
        // for (args->value = 3; args->value <= nb; args->value++) {
            rev_value = my_revnbr(args->value);
            printf(" reverse -> %d\n", rev_value);
            res = args->value + rev_value;
            printf("res -> %d\n", res);
            if (res > args->number)
                args->value++;
            check_palindrome(args, res);
        // }
    // }
    return (0);
}

int flag_p(arguments_t *args)
{
    iterations(args, args->number);
    return (0);
}