/*
** EPITECH PROJECT, 2019
** create_map
** File description:
** duostumper2
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

char **malloc_line(char **map, int col_max)
{
    for (int i = 0; i != col_max; i++) {
        map[i] =  malloc(sizeof(char) * col_max);
        if (map[i] == NULL)
            return (NULL);
    }
    return (map);
}

char *first_and_last_line(char *line, int col_max)
{
    for (int i = 0; i != (col_max); i++)
        line[i] = '+';
    line[col_max] = '\0';
    return (line);
}

char *middle_line(char *line, int col_max, char *text)
{
    int count = 1;
    static int c_text = 0;

    line[0] = '|';
    while (count != (col_max - 1)) {
        if (count % 2 == 1)
            line[count] = ' ';
        else {
            line[count] = text[c_text];
            c_text++;
        }
        count++;
    }
    line[col_max - 1] = '|';
    line[col_max] = '\0';
    return (line);
}

char **create_map(int size, char *text)
{
    int col_max = (size * 2) + 3;
    int line_max = size + 2;
    char **map = NULL;

    map = malloc(sizeof(char *) * line_max);
    if (map == NULL)
        return (NULL);
    map = malloc_line(map, col_max);
    if (map == NULL)
        return (NULL);
    map[0] = first_and_last_line(map[0], col_max);
    for (int i = 1; i != (line_max - 1); i++)
        map[i] = middle_line(map[i], col_max, text);
    map[line_max - 1] = first_and_last_line(map[0], col_max);
    map[line_max] = NULL;
    return (map);
}
