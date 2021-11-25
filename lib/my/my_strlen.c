/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** find the length of the given string
*/

int my_strlen(char const *str)
{
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}
