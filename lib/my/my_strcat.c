/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** no description
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    while (src[i] != '\0') {
    dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return dest;
}
