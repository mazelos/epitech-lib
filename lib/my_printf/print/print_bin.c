/*
** EPITECH PROJECT, 2021
** print_bin
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_bin(va_list args)
{
    int nb = (int)va_arg(args, int);
    my_putbase(nb, BIN_BASE);
}
