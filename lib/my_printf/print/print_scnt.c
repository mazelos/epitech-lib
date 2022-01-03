/*
** EPITECH PROJECT, 2021
** print_scnt.c
** File description:
** print number in scientific notation format
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_scnt(va_list args)
{
    float nb = (float)va_arg(args, double);
    int i = 0;
    while (nb >= 10) {
        nb = nb / 10;
        i++;
    }
    my_putfloat(nb, 6);
    my_putstr(i < 10 ? "e+0" : "e+");
    my_putnbr(i);
}
