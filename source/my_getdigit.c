/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** obtain_digit
*/

#include "palindrome.h"

static int check_place(int i, int place, int arr[])
{
    int count_place = 0;

    for (int j = i - 1; j > -1; j--) {
        if (count_place == place - 1)
            return (arr[j]);
        count_place++;
    }
    return (0);
}

int my_getdigit(int nb, int place)
{
    int count = my_intlen(nb);
    int arr[count + 1];
    int i = 0;
    int r = 0;
    int final_number = 0;

    while (nb != 0) {
        r = nb % 10;
        arr[i] = r;
        i++;
        nb = nb / 10;
    }
    final_number = check_place(i, place, arr);
    return (final_number);
}