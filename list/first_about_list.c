#include <stdio.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main(void)
{
    int i = 0;
    node n1 = {1}, n2 = {2}, n3 = {3};
    n1.next = &n2;
    n2.next = &n3;
    node *p = &n1;

    for(i = 0; i < 3; i++)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\r\n");

    return 0;
}
