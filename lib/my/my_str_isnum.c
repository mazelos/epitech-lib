/*
** EPITECH PROJECT, 2021
** my_str_isnum
** File description:
** no description
*/

int my_str_isnum(char const *str)
{
    int i = 0;
    int is_num = 1;
    while (str[i] != '\0') {
        if (str[i] < 48 || str[i] > 57) {
            is_num = 0;
        }
        i++;
    }
    return is_num;
}
