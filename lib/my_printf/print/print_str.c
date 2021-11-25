/*
** EPITECH PROJECT, 2021
** print_str
** File description:
** No description
*/

#include "../libmy.h"
#include "../my_printf.h"

static void print_oct_char(char c)
{
    my_putchar('\\');
    if (c <= 7)
        my_putchar('0');
    if (c <= 77)
        my_putchar('0');
    my_putbase(c, OCT_BASE);
}

void print_str(va_list args)
{
    char *str = (char *)va_arg(args, char *);
    my_putstr(str);
}

void print_str_s(va_list args)
{
    char *str = (char *)va_arg(args, char *);
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] <= 32 || str[i] >= 127) {
            print_oct_char(str[i]);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
}
