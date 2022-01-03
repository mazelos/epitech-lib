/*
** EPITECH PROJECT, 2021
** my_putnbr
** File description:
** No description
*/

void my_putchar(char c);

void my_putstr(char const *str);

int my_putnbr(int nb)
{
    if (nb == -2147483648) {
        my_putstr("-2147483648");
        return 0;
    }
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9) {
        my_putnbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return 0;
}

int my_putunbr(unsigned long int nb)
{
    if (nb > 9) {
        my_putnbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return 0;
}
