/*
** EPITECH PROJECT, 2019
** main
** File description:
** duostumper2
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int main(int ac, char **av)
{
    boggle_t *flag = malloc(sizeof(boggle_t));
    int ret = 0;

    if (flag == NULL)
        return (84);
    flag->size = 4;
    flag->forced = NULL;
    ret = error_handling(ac, av);
    if (ret == - 1)
        return (84);
    ret = parsing(ac, av, flag);
    if (flag->size * flag->size != my_strlen(flag->letters)) {
        write(2, "Wrong number of characters on the grid\n", 39);
        return (84);
    }
    boggle(flag);
    return (ret);
}
