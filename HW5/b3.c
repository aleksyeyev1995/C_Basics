#include <stdio.h>

int a, b, sum =0;

int main()
{
	scanf("%d %d", &a, &b);
	for (; a <= b; a++)
	{
		sum += (a * a);
	}
	printf("%d", sum);
	return 0;
}
