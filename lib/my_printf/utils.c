/*
** EPITECH PROJECT, 2021
** utils.c
** File description:
** some utils for my_printf
*/

#include <stdlib.h>
#include "my_printf.h"

flags_t *get_flag_op(char flag, flags_t *first_flag)
{
    while (first_flag != NULL) {
        if (first_flag->flag == flag)
            return first_flag;
        first_flag = first_flag->next;
    }
    return NULL;
}

void free_list(void *list, int type)
{
    if (list == NULL)
        return;
    if (type == 1) {
        free_list(((flags_t *)list)->next, type);
        free((flags_t *)list);
    } else {
        free_list(((input_flags_t *)list)->next, type);
        free((input_flags_t *)list);
    }
}
