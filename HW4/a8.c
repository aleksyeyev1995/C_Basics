#include <stdio.h>

int a, b, c, max;

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	printf("%d", max);
	return 0;
}
