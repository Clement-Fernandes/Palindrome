/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** check_flags
*/

#include "palindrome.h"
#include "my.h"

static int flag_b(char **av, int i)
{
    if (av[i + 1] != NULL && atoi(av[i + 1]) >= 1 && atoi(av[i + 1]) <= 10)
        return (true);
    return (false);
}

static int flag_i(char **av, int i)
{
    if (av[i + 1] != NULL && atoi(av[i + 1]) >= 0)
        return (true);
    return (false);
}

static int check_options(arguments_t *args, char **av)
{
    for (int i = 3; av[i] != NULL; i += 2) {
        if (strcmp(av[i], "-b") == 0) {
            if (!flag_b(av, i))
                return (false);
            args->base = atoi(av[i + 1]);
        }
        else if (strcmp(av[i], "-imin") == 0) {
            if (!flag_i(av, i))
                return (false);
            args->imin = atoi(av[i + 1]);
        }
        else if (strcmp(av[i], "-imax") == 0) {
            if (!flag_i(av, i))
                return (false);
            args->imax = atoi(av[i + 1]);
        }
        else
            return (false);
    }
    return (true);
}

int check_flag_n(arguments_t *args, int nb, char **av)
{
    if (nb <= 0) {
        printf("invalid argument\n");
        return (84);
    }
    args->number = nb;
    if (!check_options(args, av)) {
        printf("invalid argument\n");
        return (84);
    }
    flag_n(args);
    return (0);
}

int check_flag_p(arguments_t *args, int nb, char **av)
{
    av = av;
    if (nb <= 0)
        printf("invalid option\n");
    else {
        args->number = nb;
    }
    return (0);
}