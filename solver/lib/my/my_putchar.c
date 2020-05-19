/*
** EPITECH PROJECT, 2018
** putchar
** File description:
** test
*/

#include <unistd.h>
#include "./my.h"

int my_putchar(char c)
{
    int i = 0;

    write(1, &c, 1);
    i++;
    return (i);
}
