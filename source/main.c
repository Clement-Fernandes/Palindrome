/*
** EPITECH PROJECT, 2021
** Palindrome
** File description:
** main
*/

#include "palindrome.h"

int main(int ac, char **av)
{
    if (ac <= 1)
        return (84);
    if (check_helper(ac, av) != 1) {
        if (palindrome(av) == 84)
            return (84);
    }
    return (0);
}