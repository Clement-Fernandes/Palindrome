/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** check_flags
*/

#include "palindrome.h"

int check_flag_n(arguments_t *args, int nb, char const **av)
{
    if (nb <= 0)
        return (84);
    args->number = nb;
    if (!check_options(args, av))
        return (84);
    flag_n(args);
    return (0);
}

int check_flag_p(arguments_t *args, int nb, char const **av)
{
    if (nb <= 0)
        return (84);
    args->number = nb;
    if (!check_options(args, av))
        return (84);
    if (is_palindromic(args, args->number))
        return (84);
    flag_p(args);
    return (0);
}