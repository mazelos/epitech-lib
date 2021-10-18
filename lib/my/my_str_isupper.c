/*
** EPITECH PROJECT, 2021
** my_str_isupper
** File description:
** no description
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    int is_upper = 1;
    while (str[i] != '\0') {
        if (str[i] < 65 || str[i] > 90) {
            is_upper = 0;
        }
        i++;
    }
    return is_upper;
}
