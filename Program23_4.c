#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char ch;
    BOOL bRet;

    printf("Enter Character\t");
    scanf("%c", &ch);

    bRet = ChkAlpha(ch);
    if (bRet == true)
    {
        printf("%c is Small Letter", ch);
    }
    else
    {
        printf("%c is Not Small Letterr", ch);
    }

    return 0;
}
