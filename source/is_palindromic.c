/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-clement.fernandes
** File description:
** is_palindromic
*/

#include "palindrome.h"

int is_palindromic(arguments_t *args, int nb)
{
    int new_nb = dec_to_base(nb, args->base);
    int rev_nb = my_revnbr(new_nb);

    if (my_intcmp(new_nb, rev_nb) != 0)
        return (84);
    return (0);
}