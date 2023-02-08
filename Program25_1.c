#include <stdio.h>

int CountCapital(char *ch)
{
    int iCnt = 0;
    while (*ch != '\0')
    {
        if ((*ch >= 'A') && (*ch <= 'Z'))
        {
            iCnt++;
        }
        ch++;
    }
    return iCnt;
}

int main()
{
    char ch[20];
    int iRet = 0;

    printf("Enter String :-");
    scanf("%[^'\n']s", ch);

    iRet = CountCapital(ch);
    printf("%d", iRet);
    return 0;
}
