#include <stdio.h>

// Please enter string
// Abhishek
// Reverse string is :- kehsihbA

char Reverse(char *ch)
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

    printf("Please enter string\n");
    scanf("%[^'\n']s", Arr);

    Reverse(Arr);

    printf("Reverse string is :- %s", Arr);

    return 0;
}
