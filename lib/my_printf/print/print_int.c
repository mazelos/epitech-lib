/*
** EPITECH PROJECT, 2021
** print_nbr
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_int(va_list args)
{
    int nb = (int)va_arg(args, int);
    my_putnbr(nb);
}

void print_uint(va_list args)
{
    int nb = (int)va_arg(args, int);
    my_putunbr(nb);
}
