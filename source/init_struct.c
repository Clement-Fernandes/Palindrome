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
    args->value = 0;
    args->palin = 1;
    args->base = 10;
    args->imin = 0;
    args->imax = 100;
    args->iterations = 0;
    args->is_pal = false;
    args->flag_b = false;
    args->flag_imin = false;
    args->flag_imax = false;
    return (args);
}