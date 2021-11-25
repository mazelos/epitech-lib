/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** print strings
*/

void my_putchar(char);

void my_putstr(char const *str)
{
    int i = 0;
    while ( str[i] != '\0' ) {
        my_putchar(str[i]);
        i++;
    }
}

void my_putstr_n(char *str, int stop)
{
    int i = 0;
    while (str[i] != '\0' && i < stop) {
        my_putchar(str[i]);
        i++;
    }
}
