#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
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
        printf("%c is Capital Letter", ch);
    }
    else
    {
        printf("%c is Not Capital Letterr", ch);
    }

    return 0;
}
