/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** my_pow
*/

#include "palindrome.h"

int my_pow(int nb, int pow)
{
    int base = nb;
    int i = pow - 1;

    while (i != 0) {
        nb = nb * base;
        i--;
    }
    return (nb);
}