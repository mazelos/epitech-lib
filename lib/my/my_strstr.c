/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** no description
*/

static int check_if_match(char *sub_str, const char *to_find)
{
    int i = 0;
    while (to_find[i] != '\0') {
        if (to_find[i] != sub_str[i])
            return 0;
        i++;
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    int str_match = 0;
    int i = 0;

    while (str[i] != '\0') {
        str_match = check_if_match(str + i, to_find);
        if (str_match)
            return str + i;
        i++;
    }
    return 0;
}
