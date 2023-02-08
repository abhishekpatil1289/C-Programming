#include <stdio.h>

// Enter String:-
// Abhishek Vilas Patil
// ABHISHEK VILAS PATIL

void StrUpper(char *ch)
{
    int iCnt = 0;

    while (*ch != '\0')
    {
        if (*ch >= 'a' && *ch <= 'z')
        {
            *ch = *ch -= 32;
        }
        ch++;
    }
}

int main()
{
    char str[30];
    printf("Enter String:-\n");
    scanf("%[^'\n']s", str);

    StrUpper(str);
    printf(str);

    return 0;
}