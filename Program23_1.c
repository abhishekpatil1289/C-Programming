#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if (ch >= 'a' || ch >= 'z' || ch >= 'A' || ch >= 'Z')
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
        printf("%c is a Character", ch);
    }
    else
    {
        printf("%c is Not Character", ch);
    }

    return 0;
}