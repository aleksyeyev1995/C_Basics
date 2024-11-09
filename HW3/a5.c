#include <stdio.h>

int a, b, c;

int main()
{
	scanf("%d%d%d", &a, &b, &c);
	printf("%.2f", ((float)(a + b + c))/3.0);
	return 0;
}	

