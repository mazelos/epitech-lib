/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include <stdlib.h>

int my_arrlen(char **);

char **merge_str_arr(char **arr1, char **arr2)
{
    char **res =
        malloc(sizeof(char *) * (my_arrlen(arr1) + my_arrlen(arr2) + 1));
    int i = 0;
    for (; arr1 && arr1[i] != NULL; i++) {
        res[i] = arr1[i];
        res[i + 1] = NULL;
    }
    for (int j = 0; arr2 && arr2[j] != NULL; j++) {
        res[i + j] = arr2[j];
        res[i + j + 1] = NULL;
    }
    return res;
}
