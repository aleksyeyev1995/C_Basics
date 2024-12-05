#include <stdio.h>

int sum_recursive(int n)
{
    int sum = n;
    if(n != 1)
    {
        sum += sum_recursive(n-1);
        return sum;   
    }
    else
    {
        sum = 1;
        return sum;
    }
    
}

int main()
{
    int in;
    scanf("%d", &in);
    printf("%d", sum_recursive(in));
    return 0;
}