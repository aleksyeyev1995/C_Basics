#include <stdio.h>

void print_nums(int n)
{
    if(n == 1)
    {
        printf("%d ", n);
        return;
    }
    else
        print_nums(n - 1);
    printf("%d ", n);
    return;
}

int main()
{
    int in;
    scanf("%d", &in);
    print_nums(in);
    return 0;
}