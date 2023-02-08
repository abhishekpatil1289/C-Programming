#include <stdio.h>
#include <stdbool.h>

// Please enter string
// Abbhiiiii
// Enter Character
// i
// 5 times

typedef int BOOL;

void ChkFrequency(char *ch, char i)
{
    int iCnt = 0;

    while (*ch != '\0')
    {
        if (*ch == i)
        {
            iCnt++;
        }
        ch++;
    }
    printf("%d", iCnt);
}
int main()
{
    char ch[20];
    BOOL result = false;
    char i = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s", ch);

    printf("Enter Character\n");
    scanf(" %c", &i);

    if (ch == '\0')
    {
        printf("Empty String!!!");
    }
    else
    {
        // result =
        ChkFrequency(ch, i);
    }
    return 0;
}
