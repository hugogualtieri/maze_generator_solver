/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** lol
*/

#include <stdio.h>
#include <unistd.h>
#include "./my.h"

int my_putnbr_base_o(unsigned int nb, char const *base)
{
    int base_len = my_strlen(base);

    if (nb == 0)
        return (0);
    else
        my_putnbr_base_o(nb / base_len, base);
    my_putchar(base[nb % base_len]);
    return (0);
}
