/*
** EPITECH PROJECT, 2021
** my_strcapitalize
** File description:
** no description
*/

static int check_is_letter_lowercase(char c)
{
    if (c >= 97 && c <= 122) {
        return 1;
    }
    return 0;
}

static int check_is_letter_uppercase(char c)
{
    if (c >= 65 && c <= 90) {
        return 1;
    }
    return 0;
}

static int check_is_spacing(char c)
{
    if (c == ' ' || c == '-' || c == '+') {
        return 1;
    }
    return 0;
}

static void change_case(char *str, int i)
{
    if (str[i] >= 97 && str[i] <= 122) {
        str[i] = str[i] - 32;
    } else {
        str[i] = str[i] + 32;
    }
}

char *my_strcapitalize(char *str)
{
    int is_letter_lowercase = 0;
    int is_letter_uppercase = 0;
    int is_after_spacing = 0;
    int i = 0;
    while (str[i] != '\0') {
        is_letter_lowercase = check_is_letter_lowercase(str[i]);
        is_letter_uppercase = check_is_letter_uppercase(str[i]);
        is_after_spacing = check_is_spacing(str[i - 1]);
        if (is_letter_lowercase && (is_after_spacing || i == 0)) {
            change_case(str, i);
        } else if (is_letter_uppercase && (!is_after_spacing || i > 0)) {
            change_case(str, i);
        }
        i++;
    }
    return str;
}
