/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** init_palindrome
*/

#include "palindrome.h"

int palindrome(char const **av)
{
    arguments_t *args = init_struct();

    if (check_args(av, args) == 84) {
        printf("invalid argument\n");
        return (84);
    }
    free(args);
    return (0);
}