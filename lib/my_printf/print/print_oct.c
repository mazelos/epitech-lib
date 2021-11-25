/*
** EPITECH PROJECT, 2021
** print_oct
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"
#include "../my_printf.h"

void print_oct(va_list args)
{
    int nb = (int)va_arg(args, int);
    my_putbase(nb, OCT_BASE);
}
