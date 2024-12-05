#include <stdio.h>

void reverse_string(void)
{
    char c = getchar();
    if(c != '.')
    {
        reverse_string();
        putchar(c);
    }
    return;
}

int main()
{
    reverse_string();
    return 0;
}