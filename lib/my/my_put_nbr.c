/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** no description
*/

void my_putchar(char c);

int my_put_nbr(long long int nb)
{
    int nb2 = 0;
    int s = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb >= 10) {
        nb2 = nb % 10;
        nb = (nb - nb2) / 10;
        my_put_nbr(nb);
        my_putchar(nb2 + 48);
    } else {
        my_putchar(48 + nb % 10);
    }
    return 0;
}

int my_put_unbr(unsigned long long int nb)
{
    int nb2 = 0;
    int s = 0;
    if (nb >= 10) {
        nb2 = nb % 10;
        nb = (nb - nb2) / 10;
        my_put_unbr(nb);
        my_putchar(nb2 + 48);
    } else {
        my_putchar(48 + nb % 10);
    }
    return 0;
}
