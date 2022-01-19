/*
** EPITECH PROJECT, 2021
** no
** File description:
** No description
*/

int my_arrlen(const char **arr)
{
    int i = 0;
    while (arr[i])
        i++;
    return i;
}
