#include <stdio.h>

int inp;

int main()
{
	scanf("%d", &inp);
	for(int i = 1; i <= inp; i++)
	{
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
	return 0;
}
