/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** no description
*/

int my_strlen(char const *str);

int my_getnbr(char* str)
{
    int str_len = my_strlen(str);
    int result = 0;
    int multiplier = 1;
    int i = 0;
    if (str[0] == '-')
        multiplier = -1;
    while (str_len > 0) {
        if (result < 57) {
            result = result * 10 + str[i] - '0';
            i++;
            str_len--;
        }
    }
    return result * multiplier;
}
