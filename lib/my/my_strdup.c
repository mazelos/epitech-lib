/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** no description
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *str)
{
    int str_len = my_strlen(str);
    char *new_str = malloc(sizeof(char) * (str_len + 1));
    int i = 0;
    while (i < str_len) {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}

char *my_strndup(char const *str, int len)
{
    char *new_str = malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++)
        new_str[i] = str[i];
    new_str[len] = '\0';
    return new_str;
}
