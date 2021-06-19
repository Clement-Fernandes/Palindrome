/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** check_args
*/

#include "palindrome.h"

int check_args(char **av, arguments_t *args)
{
    if (strcmp(av[1], "-n") == 0 && av[2] != NULL)
        args = check_flag_n(args, atoi(av[2]), av);
    else if (strcmp(av[1], "-p") == 0 && av[2] != NULL)
        args = check_flag_p(args, atoi(av[2]), av);
    else
        printf("invalid option\n");
    return (0);
}