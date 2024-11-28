#include <stdio.h>

int sum(void)
{
    int n, sum_o = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        sum_o += i;
    printf("%d", sum_o);
}

int main()
{
    sum();
    return 0;
}