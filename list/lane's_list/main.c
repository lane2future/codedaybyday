#include "list.h"
char a;
int main(void)
{
    mylist *list = create_list();
    int i = 0;
    for(i = 0; i < 5; i++)
    {
        tail_insert(list, i);
    }
    look_up_list(list);
}