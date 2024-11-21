#include <stdio.h>

int a, b;

int main()
{
	scanf("%d %d", &a, &b);
	for(;a <= b; a++)
	{
		printf("%d ", a * a);
	}
	return 0;
}
