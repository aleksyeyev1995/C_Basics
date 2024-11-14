#include <stdio.h>

int a, b;

int main()
{
	scanf("%d %d", &a, &b);
	if(a < b)
	{
		printf("%d %d", a, b);
	}
	else
	{
		printf("%d %d", b, a);
	}
	return 0;
}
