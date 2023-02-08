#include <stdio.h>

// Enter string :- Marvellous
// 9

void ChkSmall(char ch[])
{
    int iCnt = 0, i = 0;

    while (ch[i] != '\0')
    {
        if ((ch[i] >= 'a') && (ch[i] <= 'z'))
        {
            iCnt++;
        }
        i++;
    }
    printf("%d", iCnt);
}

int main()
{
    char ch[20];
    printf("Enter string :- ");
    scanf("%[^'\n']s", ch);

    ChkSmall(ch);

    return 0;
}