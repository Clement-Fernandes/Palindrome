/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** init_palindrome
*/

#include "palindrome.h"

int palindrome(char **av)
{
    arguments_t *args = init_struct();

    check_args(av, args);
    free(args);
    return (0);
}