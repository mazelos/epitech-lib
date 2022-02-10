/*
** EPITECH PROJECT, 2021
** No filename
** File description:
** No description
*/

#include <stdlib.h>

void free_str_arr(char **arr)
{
    if (!arr)
        return;
    int i = 0;
    while (arr[i]) {
        free(arr[i]);
        i++;
    }
    free(arr);
}
