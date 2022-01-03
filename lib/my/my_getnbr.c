/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** no description
*/

int my_getnbr(char *str)
{
    int res;
    int sign = 1;
    int i = 0;
    while (str[i] == '-' || str[i] == '+') {
        sign *= -(str[i] == '-');
        i++;
    }
    res = 0;
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}
