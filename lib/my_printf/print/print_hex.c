/*
** EPITECH PROJECT, 2021
** print_exa
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_hex(va_list args)
{
    int nb = (int)va_arg(args, int);
    my_putbase(nb, HEX_BASE);
}

void print_uhex(va_list args)
{
    int nb = (int)va_arg(args, int);
    my_putbase(nb, UHEX_BASE);
}
