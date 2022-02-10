/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include <stdlib.h>

void my_printf(char *, ...);

void print_str_arr(char **arr)
{
    my_printf("array:\n");
    for (int i = 0; arr[i] != NULL; i++)
        my_printf("  %d: %s\n", i, arr[i]);
}
