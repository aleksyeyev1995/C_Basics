#include <stdio.h>

int in_num, a, b, c;

int main()
{
	scanf("%d", &in_num);
	a = in_num % 10;
	b = (in_num / 10) % 10;
	c = (in_num / 100) % 10;
	printf("%d", (a * b * c));
	return 0;
}
