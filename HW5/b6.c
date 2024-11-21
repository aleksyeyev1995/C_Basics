#include <stdio.h>

int a, b1, b2;

int main()
{
	scanf("%d", &a);
	while(a > 0)
	{
		b1 = a%10;
		b2 = (a / 10) % 10;
		if(b1 == b2)
		{
			printf("YES\n");
			return 0;
		}
		a /= 10;
	}
	printf("NO");
	return 0;
}
