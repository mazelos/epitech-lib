/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** no description
*/

int my_str_isalpha(char const *str)
{
    int i = 0;
    int is_alpha = 1;
    char c;
    while (str[i] != '\0') {
        c = str[i];
        if ((c < 65 || c > 90) && (c < 97 || c > 122)) {
            is_alpha = 0;
        }
        i++;
    }
    return is_alpha;
}
