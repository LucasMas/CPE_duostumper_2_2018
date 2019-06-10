/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** lucas mascaut
*/

#include <stdlib.h>
#include "my.h"

int my_strlen(char *str)
{
    int size = 0;

    while (str[size] != '\0')
        size++;
    return (size);
}

char *my_strdup(char *src)
{
    int lengh = my_strlen(src);
    char *str = malloc(sizeof(char) * (lengh + 1));
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
