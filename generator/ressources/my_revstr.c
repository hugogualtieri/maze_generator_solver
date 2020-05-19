/*
** EPITECH PROJECT, 2019
** EPITECH TEK1
** File description:
** hugo.gualtieri@epitech.eu
*/
#include "../include/ressources.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str);
    char c;

    while (i < j) {
        j -= 1;
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i += 1;
    }
    return (str);
}