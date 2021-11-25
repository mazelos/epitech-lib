/*
** EPITECH PROJECT, 2021
** print_pointer
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_point(va_list args)
{
    long long int nb = (unsigned long long)va_arg(args, void *);
    my_putstr(HEX_PREFIX);
    my_putbase(nb, HEX_BASE);
}
