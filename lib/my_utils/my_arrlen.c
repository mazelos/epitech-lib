/*
** EPITECH PROJECT, 2021
** no
** File description:
** No description
*/

#include <stdlib.h>

int my_arrlen(const char **arr)
{
    if (!arr)
        return 0;
    int i = 0;
    while (arr[i] != NULL)
        i++;
    return i;
}
