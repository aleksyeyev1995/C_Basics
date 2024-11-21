#include <stdio.h>

int a, counter =0;

int main()
{
	scanf("%d", &a);
	while(a > 0)
	{
		counter++;
		a /= 10;
	}
	if(counter == 3)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

