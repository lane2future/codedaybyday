#include "list.h"

t_node *create_node(t_rain data)
{
    t_node *node = (t_node *)malloc(sizeof(t_node));
    if(node == NULL)
    {
        printf("err <file:%s> <function:%s> <line_num:%d>\r\n", __FILE__, __FUNCTION__, __LINE__);
        exit(0);
    }
    node->data = data;
    node->next = NULL;

    return node;
}

t_list *create_list(void)
{
    t_list *list = (t_list *)malloc(sizeof(t_list));
    if(list == NULL)
    {
        printf("err <file:%s> <function:%s> <line_num:%d>\r\n", __FILE__, __FUNCTION__, __LINE__);
        exit(0);
    }
    list->head = NULL;
    list->tail = NULL;
    list->size = 0;
    return list;
}

bool is_it_empty(t_list *list)
{
    return list->size == 0;
}

void tail_insert(t_list *list, t_rain data)
{
    t_node *new_node = create_node(data);
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

void traverse_list(int *data)
{
    printf("%d ", *data);
}

void transform(t_list *list, void (*func)(t_rain*))
{
    if(is_it_empty(list))return;
    t_node *cur_node = list->head;
    while(cur_node != NULL)
    {
        func(&cur_node->data);
        cur_node = cur_node->next;
    }
        printf("\r\n");
}