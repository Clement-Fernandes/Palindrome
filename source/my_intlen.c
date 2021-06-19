/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** my_intlen
*/

#include "palindrome.h"

int my_intlen(int nb)
{
    int count = 0;

    while (nb != 0) {
        nb = nb / 10;
        count++;
    }
    return (count);
}