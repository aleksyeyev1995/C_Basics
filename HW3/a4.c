#include <stdio.h>

int a, b, c;

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	printf("%d+%d+%d=%d\n", a, b, c, (a+b+c));
	printf("%d*%d*%d=%d", a, b, c, (a*b*c));
	return 0;
}
