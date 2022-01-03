/*
** EPITECH PROJECT, 2021
** my_includes.c
** File description:
** checks if char is in arr (includes() Js style)
*/

int my_find_in_arr(char c, char *arr)
{
    int i = 0;
    while (arr[i] != '\0') {
        if (arr[i] == c)
            return 1;
        i++;
    }
    return 0;
}
