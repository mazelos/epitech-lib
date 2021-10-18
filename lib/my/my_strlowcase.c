/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** no description
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        str[i] = str[i] + 32;
        i++;
    }
    return str;
}
