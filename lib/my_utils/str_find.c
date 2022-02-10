/*
** EPITECH PROJECT, 2021
** my_includes.c
** File description:
** find char in string and return idx (-1 if not found)
*/

int str_find(char c, char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c)
            return i;
        i++;
    }
    return -1;
}
