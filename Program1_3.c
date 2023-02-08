#include <stdio.h>

void Display()
{
    int i = 0;
    for (i = 5; i > 0; i--)
    {
        printf("%d", i);
    }
}

int main()
{
    Display();
    return 0;
}