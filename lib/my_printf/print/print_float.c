/*
** EPITECH PROJECT, 2021
** print_float.c
** File description:
** print float number
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_float(va_list args)
{
    float nb = (float)va_arg(args, double);
    my_putfloat(nb, 6);
}
