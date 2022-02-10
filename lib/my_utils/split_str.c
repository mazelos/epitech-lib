/*
** EPITECH PROJECT, 2021
** No filename
** File description:
** No description
*/

#include <stdlib.h>

int my_strlen(char const *);

char *my_strndup(char const *, int);

char *trim_str(char *);

static int check_char(char c, char c_check, int type)
{
    if (c == '\0')
        return 0;
    if (c_check) {
        return type == 1 ? c != c_check : c == c_check;
    } else {
        return type == 1 ? c > 32 : c < 33;
    }
}

static int count_delimiters(char *str, char c)
{
    int i = 0;
    int count = 0;
    while (str[i] != '\0') {
        if (i > 0 && check_char(str[i - 1], c, 1)
            && check_char(str[i], c, 2))
            count++;
        i++;
    }
    return count;
}

static int calc_word_len(char *str, char c)
{
    int i = 0;
    while (check_char(str[i], c, 1))
        i++;
    return i;
}

static int calc_delimiter_len(char *str, char c)
{
    int i = 0;
    while (check_char(str[i], c, 2))
        i++;
    return i;
}

char **split_str(char *str, char c)
{
    if (!str)
        return NULL;
    char *trimmed_str = trim_str(str);
    char *tr_str = trimmed_str;
    int words_count = count_delimiters(trimmed_str, c) + 1;
    if (words_count < 1)
        return NULL;
    char **splitted_str = malloc(sizeof(char *) * (words_count + 1));

    for (int i = 0; i < words_count; i++) {
        int word_len = calc_word_len(tr_str, c);
        int delimiter_len = calc_delimiter_len(tr_str + word_len, c);
        splitted_str[i] = my_strndup(tr_str, word_len);
        tr_str += (word_len + delimiter_len);
        splitted_str[i + 1] = NULL;
    }
    free(trimmed_str);
    return splitted_str;
}
