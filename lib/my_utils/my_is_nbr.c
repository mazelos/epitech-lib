/*
** EPITECH PROJECT, 2021
** my_is_nbr
** File description:
** Checks if a string can be converted to number or not
*/

int my_is_nbr(char *nb_str)
{
    int i = 0;
    while (nb_str[i] != '\0') {
        if (nb_str[i] < '0' || nb_str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}
