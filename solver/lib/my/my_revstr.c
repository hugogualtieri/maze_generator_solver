/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** libmy
*/

#include <stdio.h>
#include "./my.h"

char *my_revstr(char *str)
{
    int a = 0;
    int b = my_strlen(str) - 1;
    char letter;

    while (a <= b) {
        letter = str[a];
        str[a] = str[b];
        str[b] = letter;
        a = a + 1;
        b = b - 1;
    }
    return (str);
}
