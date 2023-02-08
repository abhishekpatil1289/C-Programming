#include <stdio.h>

char strrevX(char *ch)
{
    char *start = ch;
    char *end = ch;
    char temp = '\0';

    while (*end != '\0')
    {
        end++;
    }

    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{

    char Arr[20];

    printf("enter string for reverse\n");
    scanf("%[^'\n']s", Arr);

    strrevX(Arr);

    printf("reverse string is => %s",Arr);

    return 0;
}
