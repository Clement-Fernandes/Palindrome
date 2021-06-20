/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** init_struct
*/

#include "palindrome.h"

arguments_t *init_struct(void)
{
    arguments_t *args = malloc(sizeof(arguments_t));

    args->number = 0;
    args->nb_base = 0;
    args->base = 10;
    args->imin = 0;
    args->imax = 100;
    args->iterations = 0;
    args->is_pal = false;
    return (args);
}