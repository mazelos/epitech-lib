/*
** EPITECH PROJECT, 2021
** my_putbase
** File description:
** No description
*/

void my_putchar(char c);

int my_strlen(char const *str);

void my_putbase(long long int num, const char *base)
{
    int base_size = my_strlen(base);
    if (num / base_size > 0) {
        my_putbase(num / base_size, base);
    }
    my_putchar(base[num % base_size]);
}
