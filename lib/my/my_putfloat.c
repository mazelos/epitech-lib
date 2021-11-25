/*
** EPITECH PROJECT, 2021
** my_putfloat
** File description:
** display float number in std output
*/

int my_calc_pow(int nb, int p);

int my_put_nbr(int nb);

void my_putchar(char c);

void my_putfloat(float nb, int precision)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    my_put_nbr((int)nb);
    if (precision == 0) {
        return;
    }
    my_putchar('.');
    nb -= (int)nb;
    nb *= my_calc_pow(10, precision);
    if ((int)nb == 0) {
        my_putchar('0');
    }
    my_put_nbr((int)nb);
}
