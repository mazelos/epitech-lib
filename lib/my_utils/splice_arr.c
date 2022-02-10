/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include <stdlib.h>

int my_arrlen(char **);

char *my_strdup(char *);

char **splice_arr(char **arr, int start, int end)
{
    int arr_len = my_arrlen(arr);
    int end_i = end > 0 ? end : arr_len - 1;
    int res_len = end_i + 1 - start;
    if (res_len <= 0)
        return NULL;
    char **res = malloc(sizeof(char *) * (res_len + 1));
    for (int i = start; i <= end_i; i++) {
        res[i - start] = my_strdup(arr[i]);
        res[i - start + 1] = NULL;
    }
    return res;
}
