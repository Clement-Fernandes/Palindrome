/*
** EPITECH PROJECT, 2021
** other
** File description:
** add
*/

#include "palindrome.h"

static long long set_result(int *arr, int i)
{
    long long result = 0;

    for (i = i - 1; i != -1; i--)
        result = (result * 10) + arr[i];
    return (result);
}

long long add(int nb1, int nb2, int base)
{
    int tmp = nb1 + nb2;
    int *arr = malloc(sizeof(int) * (my_intlen(tmp) + 1));
    long long result = 0, tpm = 0, mpt = 0, i = 0;

    if (arr == NULL)
        return (-1);
    while (tmp != 0) {
        tpm = tmp % 10;
        mpt = tpm / base;
        arr[i] = tpm % base;
        tmp /= 10;
        tmp += mpt;
        i++;
    }
    result = set_result(arr, i);
    free(arr);
    return (result);
}