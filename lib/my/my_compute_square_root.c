/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** calculate the square root of a given number
*/

int my_compute_square_root(int nb)
{
    if (nb <= 0) {
        return 0;
    }
    int result = 0;
    while (result * result < nb) {
        result++;
        if (result * result > nb) {
            return 0;
        }
    }
    return result;
}
