/*
** EPITECH PROJECT, 2019
** check_argv
** File description:
** stumper6
*/

#include "my.h"

char *get_line(void)
{
    char *buff = NULL;
    size_t buffsize;
    int characters = 1;

    while (characters == 1) {
        my_putstr("> ");
        characters = getline(&buff, &buffsize, stdin);
        if (buff == NULL)
            return (NULL);
    }
    if (characters == -1) {
        free(buff);
        exit (0);
    } else
        return (buff);
}
