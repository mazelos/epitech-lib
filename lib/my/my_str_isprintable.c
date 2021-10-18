/*
** EPITECH PROJECT, 2021
** my_str_isprintable
** File description:
** no description
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    int is_printable = 1;
    while (str[i] != '\0') {
        if (str[i] < 1 || str[i] > 126) {
            is_printable = 0;
        }
        i++;
    }
    return is_printable;
}
