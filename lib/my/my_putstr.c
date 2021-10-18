/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** no description
*/

void my_putchar(char);

int my_putstr(char const *str)
{
    int i = 0;
    while ( str[i] != '\0' ) {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
