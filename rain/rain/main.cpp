#include "list.h"
#include <graphics.h>
void rain_change(t_rain* val);
void rain_init(t_list *list)
{
    int i = 0, j = 0;
    t_rain temp;
    for (i = 0; i < 128; i++)
    {
        temp.x = i * 15;
        temp.y = rand() % 640;
        temp.speed = rand() % 2 + 1;
        for (j = 0; j < 20; j++)
        {
            temp.str[j] = rand() % 75 + '0';
        }
        
        tail_insert(list, temp);
    }
}

void raining(t_rain* val)
{
    val->y += val->speed;
    if (val->y > 960)val->y = 0;
}

void rain_change(t_rain* val)
{
    char c = rand() % 75 + '0';
    val->str[rand() % 20] = c;
}

void rain_draw(t_rain* val)
{
    int data = 0;
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        data = 255 - i * 13;
        settextcolor(RGB(0, data, 0));
        outtextxy(val->x, val->y - i * 15, val->str[i]);
    }
    
}
int main(void)
{
    
    initgraph(960, 640);
    t_list *list = create_list();
    rain_init(list);
    BeginBatchDraw();
    while (1)
    {
        cleardevice();
        transform(list, rain_draw);
        transform(list, raining);
        transform(list, rain_change);
        
        FlushBatchDraw();
    }
}