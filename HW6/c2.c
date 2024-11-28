#include <stdio.h>

int power(int n, int p)
{
	int out = n;
	if(p != 0)
	{
		if(p != 1)
		{
			for(int i = 2; i <= p; i++)
				out *= n;
			return out;
		}
		else
			return n;
	}
	else 
		return 1;
}


int main()
{
	int N, P;
	scanf("%d %d", &N, &P);
	printf("%d", power(N, P));
	return 0;
}
