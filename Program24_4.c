#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    int temp = 0;
    if ((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z') || (ch >= '0') && (ch <= '9'))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char ch;
    BOOL bRet = false;

    printf("Enter Character :- \t");
    scanf("%c", &ch);

    bRet = ChkAlpha(ch);
    if (bRet == true)
    {
        printf("Its Special Character");
    }
    else
    {
        printf("Not Special Character");
    }

    return 0;
}
