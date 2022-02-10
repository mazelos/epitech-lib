/*
** EPITECH PROJECT, 2021
** No filename
** File description:
** No description
*/

#include <stdlib.h>

int my_strlen(char const *);

static int count_char(char *str, int direction)
{
    int str_len = my_strlen(str);
    int i = direction == -1 ? str_len - 1 : 0;
    while (str[i] < 33)
        i += direction;
    if (direction == -1)
        return str_len - i - 1;
    return i;
}

char *trim_str(char *str)
{
    int from_left = count_char(str, 1);
    int from_right = count_char(str, -1);
    int new_str_len = my_strlen(str) - from_left - from_right;
    char *new_str = malloc(sizeof(char) * (new_str_len + 1));

    int i = from_left;
    int j = 0;
    while (i < my_strlen(str) - from_right) {
        new_str[j] = str[i];
        i++;
        j++;
    }
    new_str[j] = '\0';
    return new_str;
}
