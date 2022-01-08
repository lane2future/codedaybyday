#include "list.h"

mynode *create_node(int data)
{
    mynode *new_node = (mynode *)malloc(sizeof(mynode));
    if(new_node == NULL)
    {
        printf("err\r\n");
        exit(0);
    }
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

mylist *create_list(void)
{
    mylist *list = (mylist *)malloc(sizeof(mylist));
    if(list == NULL)
    {
        printf("err");
        exit(0);
    }
    list->head = NULL;
    list->size = 0;
    list->tail = NULL;

    return list;
}

_Bool is_it_empty(mylist *list)
{
    return list->size == 0;
}

void tail_insert(mylist *list, int data)
{
    mynode *new_node = create_node(data);
    if(is_it_empty(list))
    {
        list->head = new_node;
    }
    else
    {
        list->tail->next = new_node;
    }
    list->tail = new_node;
    list->size++;
}

void look_up_list(mylist *list)
{
    mynode * cur_node = list->head;
    int i = 0;
    for(i = 0; i < list->size; i++)
    {
        printf("%d ", cur_node->data);
        cur_node = cur_node->next;
    }
}