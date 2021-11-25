/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** No description
*/

#include <stdlib.h>
#include "libmy.h"
#include "my_printf.h"

void print_args(char *s, va_list args, input_flags_t *input_flags,
    flags_t *flags_list)
{
    input_flags_t *curr_flag = input_flags;
    while (curr_flag) {
        my_putstr_n(s, curr_flag->str_i);
        flags_t *flag_op = get_flag_op(curr_flag->flag, flags_list);
        flag_op->print(args);
        s = s + (curr_flag->str_i + 2);
        curr_flag = curr_flag->next;
    }
    my_putstr(my_strlen(s) ? s : "");
}

int my_printf(char *s, ...)
{
    flags_t *flags_list = get_flags();
    input_flags_t *input_flags = get_input_flags(s);
    va_list list;
    va_start(list, s);
    print_args(s, list, input_flags, flags_list);
    free_list((void *)flags_list, 1);
    free_list((void *)input_flags, 2);
    va_end(list);
    return 0;
}
