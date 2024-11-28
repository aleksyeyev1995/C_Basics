#include <stdio.h>

void print_simple(int n)
{
    int i = 2;
    while (n != 1)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            n /= i;
            i = 2;
        }
        else
            i++;
    }
    return;
}

int main()
{
    int in;
    scanf("%d", &in);
    print_simple(in);
    return 0;
}