/*
** EPITECH PROJECT, 2021
** No filename
** File description:
** find str in arr and return idx (-1 if not found)
*/

int my_strcmp(char *, char *);

int str_arr_find(char **arr, char *str)
{
    int i = 0;
    while (arr[i]) {
        if (my_strcmp(arr[i], str) == 0)
            return i;
        i++;
    }
    return -1;
}
