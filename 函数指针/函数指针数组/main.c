#include <stdio.h>

int main(void)
{
    printf("size..%d\n", (int)sizeof(int(*[5])(double)));
}