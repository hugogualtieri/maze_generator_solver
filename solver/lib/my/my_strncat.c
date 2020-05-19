/*
** EPITECH PROJECT, 2023
** CPool_Day07_2018
** File description:
** bistro
*/

#include <stdio.h>
#include "./my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int size_dest = my_strlen(dest);
    int i = -1;

    while (++i <= nb || src[++i] != '\0') {
        dest[size_dest] = src[i];
        size_dest++;
    }
    dest[size_dest+1] = '\0';
    return (dest);
}
