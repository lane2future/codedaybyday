#include "list.h"
#include <graphics.h>
void rain_init(t_list *list)
{
    int i = 0;
    t_rain temp;
    for (i = 0; i < 128; i++)
    {
        temp.x = rand() % 960;
        temp.y = rand() % 640;
        temp.ch = rand() % 26 + 'A';
        tail_insert(list, temp);
    }
}
void rain_draw(t_rain* val)
{
    outtextxy(val->x, val->y, val->ch);
}
int main(void)
{
    initgraph(960, 640);
    t_list *list = create_list();
    rain_init(list);
    transform(list, rain_draw);

    while (1);
}