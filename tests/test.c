/*
** EPITECH PROJECT, 2021
** B-SYN-200-PAR-2-1-palindrome-clement.fernandes
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <criterion/assert.h>
#include "palindrome.h"

void redirect_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
    cr_redirect_stdin();
}

Test(palindrome_tests, is_palindrome_4782, .init = redirect_std)
{
    char const *av[] = {"./palindrome", "-n", "4782", "-imin", "100", NULL};
    int status = 0;

    status = palindrome(av);

    cr_assert_eq(status, 84);
}