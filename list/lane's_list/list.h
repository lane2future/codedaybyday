#ifndef _LIST_H_
#define _LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}mynode;

typedef struct list
{
    mynode *head;
    mynode *tail;
    int size;
}mylist;

mylist *create_list(void);
mynode *create_node(int data);
_Bool is_it_empty(mylist *list);
void tail_insert(mylist *list, int data);
void look_up_list(mylist *list);
#endif