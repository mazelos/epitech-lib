/*
** EPITECH PROJECT, 2021
** flags.c
** File description:
** get flags and input_flags
*/

#include <stdlib.h>
#include "my_printf.h"
#include "print.h"
#include "libmy.h"

static void generate_flags(flags_t *prev, int i)
{
    flags_t *curr_flag = malloc(sizeof(flags_t));
    curr_flag->prev = prev;
    prev->next = curr_flag;
    curr_flag->flag = flags[i];
    curr_flag->print = funcs[i];
    if (flags[i++] == '\0') {
        curr_flag->next = NULL;
    } else {
        generate_flags(curr_flag, i);
    }
}

flags_t *get_flags(void)
{
    flags_t *first_flag = malloc(sizeof(flags_t));
    first_flag->prev = NULL;
    first_flag->flag = flags[0];
    first_flag->print = funcs[0];
    generate_flags(first_flag, 1);
    return first_flag;
}
