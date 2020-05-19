/*
** EPITECH PROJECT, 2017
** my_strncpy
** File description:
** my strncpy
*/

#include <stdio.h>
#include "./my.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != src[n + 1]) {
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}
