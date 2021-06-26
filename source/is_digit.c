/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-clement.fernandes
** File description:
** is_digit
*/

#include "palindrome.h"

int is_digit(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (false);
    }
    return (true);
}