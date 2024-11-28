#include <stdio.h>

void chess(void)
{
    int n; 
    unsigned long int out = 1;
    scanf("%d", &n);
    if(n != 1)
        for (int i = 2; i <= n; i++)
            out *= 2;   
    printf("%lu", out);

}


int main()
{
    chess();
    return 0;
}