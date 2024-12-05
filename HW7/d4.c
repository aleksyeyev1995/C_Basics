#include <stdio.h>

void print_num(int n)
{
    if (n / 10 != 0)
    {
        print_num(n / 10);
        printf("%d ", n % 10);
        return;
    }
    else
        printf("%d ", n);
    return; 
}

int main()
{
    int  in;
    scanf("%d", &in);
    print_num(in);
    return 0;
}