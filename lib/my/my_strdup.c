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
    char *new_str;
    int str_len = my_strlen(str);
    new_str = malloc(sizeof(char) * str_len);
    int i = 0;

    while (i < str_len) {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}
