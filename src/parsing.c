/*
** EPITECH PROJECT, 2019
** parsing
** File description:
** duostupmer 2
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

int is_num(char *str)
{
    int cnt = 0;

    if (str == NULL)
        return (-1);
    cnt += (str[cnt] == '-') ? 1 : 0;
    while (str[cnt] != '\0') {
        if (str[cnt] >= '0' && str[cnt] <= '9')
            cnt++;
        else
            return (-1);
    }
    return (0);
}

int forced_word(int ac, char **av, int checker, boggle_t *flag)
{
    int cnt = 0;

    for (cnt = 1; cnt != ac; cnt++) {
        if (strcmp(av[cnt], "-w") == 0 && av[cnt + 1] != NULL)
            flag->forced = my_strdup(av[cnt + 1]);
        else if (av[cnt + 1] == NULL)
            checker = -1;
    }
    return (checker);
}

int get_size(boggle_t * flag, int ac, char **av, int checker)
{
    int cnt;

    for (cnt = 1; cnt != ac; cnt++) {
        if (strcmp(av[cnt], "-s") == 0 && is_num(av[cnt + 1]) == 0)
            flag->size = atoi(av[cnt + 1]);
        else if (is_num(av[cnt + 1]) == -1 || flag->size < 0)
            return (-1);
    }
    return (checker);
}

int parsing(int ac, char **av, boggle_t *flag)
{
    int cnt;
    int checker = 1;

    for (cnt = 1; cnt != ac; cnt++) {
        if (strcmp(av[cnt], "-g") == 0 && av[cnt + 1] != NULL)
            flag->letters = my_strdup(av[cnt + 1]);
        else if (av[cnt + 1] == NULL)
            return (84);
    }
    for (cnt = 0; flag->letters[cnt] != '\0'; cnt++) {
        if (flag->letters[cnt] >= 'a' && flag->letters[cnt] <= 'z')
            checker = checker;
        else
            checker = -1;
    }
    checker = get_size(flag, ac, av, checker);
    checker = forced_word(ac, av, checker, flag);
    if (checker == -1)
        return (84);
    return (0);
}
