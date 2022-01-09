#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct rain
{
    int x;
    int y;
    char ch;
}t_rain;

typedef struct node
{
    t_rain data;
    struct node *next;
}t_node;

typedef struct list
{
    t_node *head;
    t_node *tail;
    int size;
}t_list;


t_node *create_node(t_rain data);
t_list *create_list(void);
void tail_insert(t_list *list, t_rain data);
bool is_it_empty(t_list *list);
void traverse_list(int *data);
void transform(t_list *list, void (*func)(t_rain*));

#endif

