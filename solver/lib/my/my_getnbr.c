/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** libmy
*/

#include <stdio.h>
#include "./my.h"

int my_getnbr(char const *str)
{
    int c = 0;
    int i = 0;

    if (str[0] == '-') {
        c = (c * (-1));
        i += 1;
    }
    else if (str[i] < '0'|| str[i] > '9') {
        return (0);
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9')) {
        c = c * 10 + (str[i] - '0');
        i += 1;
    }
    if (str[0] == '-')
        c = (c * (-1));
    return (c);
}
