#include <stdio.h>

void back_view(int n)
{
    if (n / 10 != 0)
    {
        printf("%d ", n % 10);
        back_view(n / 10);
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
    back_view(in);
    return 0;
}