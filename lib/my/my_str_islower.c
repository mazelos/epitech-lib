/*
** EPITECH PROJECT, 2021
** my_str_islower
** File description:
** no description
*/

int my_str_islower(char const *str)
{
    int i = 0;
    int is_lower = 1;
    while (str[i] != '\0') {
        if (str[i] < 97 || str[i] > 122) {
            is_lower = 0;
        }
        i++;
    }
    return is_lower;
}
