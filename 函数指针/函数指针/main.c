#include <stdio.h>
int(*func)(int a, int b) = NULL;
typedef int(*func_p)(int a, int b);


int max(int a, int b)
{
	return a > b ? a : b;
}

void transform(func_p func)
{
	int c = func;
	printf("%d\n", c);
}

int main(void)
{
	transform(max(1,2));


	return 0;
}