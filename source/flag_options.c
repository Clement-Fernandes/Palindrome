/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-clement.fernandes
** File description:
** flag_b
*/

#include "palindrome.h"

int flag_b(arguments_t *args, char const **av, int i)
{
    if (args->flag_b == true)
        return (false);
    if (av[i + 1] != NULL && atoi(av[i + 1]) > 1 && atoi(av[i + 1]) <= 10) {
        args->flag_b = true;
        return (true);
    }
    return (false);
}

int flag_imin(arguments_t *args, char const **av, int i)
{
    if (args->flag_imin == true)
        return (false);
    if (av[i + 1] != NULL && atoi(av[i + 1]) >= 0) {
        if (is_digit(av[i + 1]) == false)
            return (false);
        args->flag_imin = true;
        return (true);
    }
    return (false);
}

int flag_imax(arguments_t *args, char const **av, int i)
{
    if (args->flag_imax == true)
        return (false);
    if (av[i + 1] != NULL && atoi(av[i + 1]) >= 0) {
        if (is_digit(av[i + 1]) == false)
            return (false);
        args->flag_imax = true;
        return (true);
    }
    return (false);
}