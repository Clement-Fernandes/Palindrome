/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-clement.fernandes
** File description:
** check_option
*/

#include "palindrome.h"

static int get_args(arguments_t *args, char const **av, int i)
{
    if (strcmp(av[i], "-b") == 0) {
        if (!flag_b(args, av, i))
            return (false);
        args->base = atoi(av[i + 1]);
    }
    if (strcmp(av[i], "-imax") == 0) {
        if (!flag_imax(args, av, i))
            return (false);
        args->imax = atoi(av[i + 1]);
    }
    if (strcmp(av[i], "-imin") == 0) {
        if (!flag_imin(args, av, i))
            return (false);
        args->imin = atoi(av[i + 1]);
    }
    return (true);
}

int check_options(arguments_t *args, char const **av)
{
    for (int i = 3; av[i] != NULL; i += 2) {
        if (!get_args(args, av, i))
            return (false);
        if (strcmp(av[i], "-b") != 0 && strcmp(av[i], "-imin")
        != 0 && strcmp(av[i], "-imax") != 0)
            return (false);
    }
    if (args->imin >= args->imax)
        return (false);
    return (true);
}