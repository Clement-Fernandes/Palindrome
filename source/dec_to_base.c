/*
** EPITECH PROJECT, 2021
** change_base
** File description:
** change_base
*/

#include "palindrome.h"
#include <stdio.h>

static int get_higher(int nb, int base)
{
    int stop = 0;

    for (int i = 0; stop != 1; i++) {
        if ((my_pow(base, i) * (base - 1)) <= nb)
            continue;
        return (i - 1);
    }
    return (0);
}

static long long set_result(int *arr, int i)
{
    long long result = 0;

    for (i = i - 1; i != -1; i--)
        result = (result * 10) + arr[i];
    return (result);
}

long long dec_to_base(long long nb, int base)
{
    int *arr = malloc(sizeof(int) * (get_higher(nb, base) + 2));
    int res = nb;
    int rest = 0;
    long long result = 0;
    int i = 0;

    if (arr == NULL)
        return (-1);
    while (res != 0) {
        rest = res % base;
        res = res / base;
        arr[i] = rest;
        i++;
    }
    result = set_result(arr, i);
    free(arr);
    return (result);
}