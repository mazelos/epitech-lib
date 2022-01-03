/*
** EPITECH PROJECT, 2021
** no
** File description:
** No description
*/

char my_char_lowcase(char c);

int my_strcmp_nocase(char const *s1, char const *s2)
{
    int cmp_result = 0;
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        cmp_result = my_char_lowcase(s1[i]) - my_char_lowcase(s2[i]);
        if (cmp_result != 0)
            return cmp_result;
        i++;
    }
    return cmp_result;
}
