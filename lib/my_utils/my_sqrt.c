/*
** EPITECH PROJECT, 2021
** my_sqrt
** File description:
** Given a number (float) it returns its sqaure (float)
*/

float my_sqrt(float n)
{
    float n1 = 1;
    float n2 = n;
    float sqrt;
    while ((n2 - n1) > 0.0001) {
        sqrt = (n1 + n2) / 2;
        if (sqrt * sqrt == n)
            return sqrt;
        if (sqrt * sqrt > n)
            n2 = sqrt;
        else
            n1 = sqrt;
    }
    return sqrt;
}
