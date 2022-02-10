/*
** EPITECH PROJECT, 2021
** No filename
** File description:
** check comparison untill a specific char
*/

static int check_chars(char c1, char c2, char end)
{
    if (c1 == '\0' || c2 == '\0')
        return 0;
    if (c1 == '\n' || c2 == '\n')
        return 0;
    if (c1 == end || c2 == end)
        return 0;
    return 1;
}

int my_strcmpc(char const *s1, char const *s2, char end)
{
    int cmp_result = 0;
    int i = 0;
    while (check_chars(s1[i], s2[i], end)) {
        cmp_result = s1[i] - s2[i];
        if (cmp_result != 0)
            return cmp_result;
        i++;
    }
    return cmp_result;
}
