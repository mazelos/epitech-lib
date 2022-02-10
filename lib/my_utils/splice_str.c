/*
** EPITECH PROJECT, 2022
** No filename
** File description:
** No description
*/

#include <stdlib.h>

int my_strlen(char *);

char *splice_str(char *str, int start, int end)
{
    int str_len = my_strlen(str);
    int end_i = end > 0 ? end : str_len - 1;
    int res_len = end_i + 1 - start;
    if (res_len <= 0)
        return NULL;
    char *res = malloc(sizeof(char) * (res_len + 1));
    for (int i = start; i <= end_i; i++) {
        res[i - start] = str[i];
        res[i - start + 1] = '\0';
    }
    return res;
}
