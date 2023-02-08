#include <stdio.h>

// Enter String :-
// ABHIshek
// abhishek

void StrLower(char ch[])
{
    int i = 0;
    while (ch[i] != '\0')
    {
        if ((ch[i] >= 'A') && (ch[i] <= 'Z'))
        {
            ch[i] = ch[i] += 32;
        }
        ch++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String\n");
    scanf("%[^'\n']s", Arr);

    StrLower(Arr);
    printf(Arr);

    return 0;
}
