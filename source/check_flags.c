/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** check_flags
*/

#include "palindrome.h"
#include "my.h"

static void print_invalid(arguments_t *args, bool check)
{
    if (check == false) {
        args->is_pal = true;
        printf("invalid argument\n");
    }
}

static int check_options(arguments_t *args, char **av)
{
    bool check = false;

    for (int i = 0; av[i] != NULL; i++) {
        if (strcmp(av[i], "-b") == 0 && av[i + 1] != NULL && atoi(av[i + 1]) >= 1 && atoi(av[i + 1]) <= 10) {
            args->base = atoi(av[i + 1]);
            check = true;
        }
        if (strcmp(av[i], "-imin") == 0 && av[i + 1] != NULL && atoi(av[i + 1]) >= 0) {
            args->imin = atoi(av[i + 1]);
            check = true;
        }
        if (strcmp(av[i], "-imax") == 0 && av[i + 1] != NULL && atoi(av[i + 1]) >= 0) {
            args->imax = atoi(av[i + 1]);
            check = true;
        }
    }
    print_invalid(args, check);
    return (0);
}

arguments_t *check_flag_n(arguments_t *args, int nb, char **av)
{
    if (nb <= 0)
        printf("invalid argument\n");
    else {
        args->number = nb;
        check_options(args, av);
        flag_n(args);
    }
    return (args);
}

arguments_t *check_flag_p(arguments_t *args, int nb, char **av)
{
    av = av;
    if (nb <= 0)
        printf("invalid option\n");
    else {
        args->number = nb;
    }
    return (args);
}