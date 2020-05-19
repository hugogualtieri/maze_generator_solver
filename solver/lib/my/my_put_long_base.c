/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** lol
*/

#include <stdio.h>
#include <unistd.h>
#include "./my.h"

int my_put_long_base(long nb, char const *base)
{
    int base_len = my_strlen(base);

    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb == 0)
        return (0);
    else
        my_put_long_base((long)(nb / base_len), base);
    my_putchar(base[nb % base_len]);
    return (0);
}
