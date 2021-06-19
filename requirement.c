/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** requirement
*/

#include <stdio.h>
#include <stdlib.h>

int my_factrec_synthesis(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (nb * my_factrec_synthesis(nb - 1));
}

int my_squareroot_synthesis(int nb)
{
    int square_root = 0;
    int value = 0;

    while (value != nb) {
        square_root++;
        value = square_root * square_root;
        if (value >= 46340)
            return (-1);
    }
    return (square_root);
}