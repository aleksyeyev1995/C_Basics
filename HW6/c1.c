#include <stdio.h>

int abs_num(void)
{
	int a;
	scanf("%d", &a);
	return (a >= 0) ? a:-a;
}

int main()
{
	printf("%d", abs_num());
	return 0;
}
