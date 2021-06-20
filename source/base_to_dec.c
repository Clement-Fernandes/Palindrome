/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** power_base
*/

#include "palindrome.h"

int base_to_dec(int nb, int base)
{
    int len = my_intlen(nb);
    int power = 1;
    int num = 0;
 
    for (int i = len; i >= 0; i--) {
        if (my_getdigit(nb, i) >= base)
           return (84);
        num += my_getdigit(nb, i) * power;
        power = power * base;
    }
    return (num);
}