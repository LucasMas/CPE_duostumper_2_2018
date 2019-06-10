/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** duostumper 2 error handlings fucntions
*/

#include <string.h>
#include <stdlib.h>
#include "my.h"

int error_handling(int ac, char **av)
{
    int cnt = 1;
    int ret = -1;

    while (cnt != ac) {
        if (strcmp(av[cnt], "-g") == 0)
            ret = 0;
        cnt++;
    }
    return (ret);
}
