#include <stdio.h>

int in, a, b, c;

int main()
{
	scanf("%d", &in);
	a = in % 10;
	b = (in / 10) % 10;
	c = (in / 100) % 10;
	in = (a > b) ? a : b;
	in = (in > c) ? in : c;
	printf("%d", in);
	return 0;
}	
