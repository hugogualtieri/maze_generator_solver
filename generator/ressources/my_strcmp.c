/*
** EPITECH PROJECT, 2019
** EPITECH TEK1
** File description:
** hugo.gualtieri@epitech.eu
*/
#include "../include/ressources.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return (1);
        if (s2[i] > s1[i])
            return (-1);
        i++;
    }
    if (s1[i] != '\0')
        return (-1);
    if (s2[i] != '\0')
        return (1);
    return (0);
}