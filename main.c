/*
** EPITECH PROJECT, 2021
** Workshop chained list
** File description:
** main
*/

#include <stdlib.h>

struct node {
    void *data;
    struct node *next;
};

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
    struct node *head;
    struct node *tmp;

    for (int i = 0; i < argc; i++) {
        tmp = malloc(sizeof(struct node));
        tmp->data = create_data(i, argv[i]);
        if (head != NULL)
            head->next = tmp;
        head = tmp;
    }
}