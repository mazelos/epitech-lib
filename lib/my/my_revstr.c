/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** no description
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int i = 0;
    int str_len = my_strlen(str);
    char temp_char;
    while (i < str_len / 2) {
        temp_char = str[i];
        str[i] = str[str_len - i - 1];
        str[str_len - i - 1] = temp_char;
        i++;
    }
    return str;
}
