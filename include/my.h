/*
** EPITECH PROJECT, 2019
** my
** File description:
** duostumper2
*/

typedef struct boggle {
    char *forced;
    char *letters;
    int size;
} boggle_t;

int boggle(boggle_t *);
int my_strlen(char *);
char *my_strdup(char *);
int parsing(int, char **, boggle_t *);
int error_handling(int, char **);
char **create_map(int, char *);
char *get_line(void);
