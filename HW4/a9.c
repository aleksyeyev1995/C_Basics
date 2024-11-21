#include <stdio.h>

int a1, a2, a3, a4, a5;

int main()
{
	scanf("%d %d %d %d %d", &a1, &a2, &a3, &a4, &a5);
	a1 = (a1 > a2) ? a1 : a2;
	a1 = (a1 > a3) ? a1 : a3;
	a1 = (a1 > a4) ? a1 : a4;
	a1 = (a1 > a5) ? a1 : a5;
	printf("%d", a1);
	return 0;
}

