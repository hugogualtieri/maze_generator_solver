/*
** EPITECH PROJECT, 2018
** putnbr
** File description:
** lol
*/

#include <stdio.h>
#include <unistd.h>
#include "./my.h"

void my_put_unsigned_base(unsigned int nb, char const *base)
{
    int base_len = my_strlen(base);

    my_putnbr_base(nb / base_len, base);
    my_putchar(base[nb % base_len]);
}
