/*
** EPITECH PROJECT, 2021
** input_flags.c
** File description:
** No description
*/

#include <stdlib.h>
#include "my_printf.h"
#include "print.h"
#include "libmy.h"

static int check_flag(char *s)
{
    char *str = s;
    char symbol = *str++;
    char input_flag = *str++;
    if (symbol != '%')
        return 0;
    int i = 0;
    while (flags[i] != '\0') {
        if (flags[i] == input_flag)
            return 1;
        i++;
    }
    return 0;
}

static input_flags_t *create_flag(char f, int count,
    input_flags_t *prev_flag)
{
    input_flags_t *curr_flag = malloc(sizeof(input_flags_t));
    curr_flag->flag = f;
    curr_flag->str_i = count;
    curr_flag->next = NULL;
    if (prev_flag)
        prev_flag->next = curr_flag;
    return curr_flag;
}

input_flags_t *get_input_flags(char *str)
{
    input_flags_t *curr_f = NULL;
    input_flags_t *first_f = NULL;
    input_flags_t *prev_f = NULL;
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (check_flag(str + i)) {
            curr_f = create_flag(str[i + 1], count, prev_f);
            first_f = !first_f ? curr_f : first_f;
            prev_f = curr_f;
            i++;
            count = 0;
        } else {
            count++;
        }
        i++;
    }
    return first_f;
}
