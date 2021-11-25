/*
** EPITECH PROJECT, 2021
** print_char
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"

void print_char(va_list args)
{
    char c = (char)va_arg(args, int);
    my_putchar(c);
}

void print_mod_char(va_list args)
{
    my_putchar('%');
}
