/*
** EPITECH PROJECT, 2020
** Palindrome
** File description:
** str len
*/

int my_strlen(char const *str)
{
    int n = 0;

    for (; str[n] != '\0'; n++);
    return (n);
}
