/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** my_revnbr
*/

#include "palindrome.h"

int my_revnbr(int nb)
{
    long long rev_nb = 0;

    while (nb > 0) {
        rev_nb = rev_nb * 10 + nb % 10;
        nb = nb / 10;
    }
    return (rev_nb);
}