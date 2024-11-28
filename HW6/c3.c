#include <stdio.h>

int middle(int a, int b)
{
	return (a+b)/2;
}

int main()
{
	int A, B;
	scanf("%d %d", &A, &B);
	printf("%d", middle(A, B));
	return 0;
}
