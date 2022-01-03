/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** no description
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *s1, char *s2)
{
    int s1_len = my_strlen(s1);
    char *res = malloc(sizeof(char) * (s1_len + my_strlen(s2) + 1));
    int i = 0;
    while (s1[i] != '\0') {
        res[i] = s1[i];
        i++;
    }
    while (s2[i - s1_len] != '\0') {
        res[i] = s2[i - s1_len];
        i++;
    }
    res[i] = '\0';
    return res;
}
