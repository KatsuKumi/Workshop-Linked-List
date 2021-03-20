/*
** EPITECH PROJECT, 2021
** Workshop chained list
** File description:
** main
*/

#include <stdlib.h>

struct data {
    int i;
    char *str;
};

struct data *create_data(int i, char *str)
{
    struct data *data = malloc(sizeof(struct data));

    data->i = i;
    data->str = str;
    return (data);
}

int main(int argc, char **argv)
{
    
}
