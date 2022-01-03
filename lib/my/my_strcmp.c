/*
** EPITECH PROJECT, 2021
** my_strcmp.c
** File description:
** no description
*/

int my_strcmp(char const *s1, char const *s2)
{
    int cmp_result = 0;
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0') {
        cmp_result = s1[i] - s2[i];
        if (cmp_result != 0)
            return cmp_result;
        i++;
    }
    return cmp_result;
}
