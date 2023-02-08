#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if (ch == 'A' | ch == 'a')
    {
        printf("Your Exam at 7 AM");
    }
    else if (ch == 'B' || ch == 'b')
    {
        printf("Your Exam at 8:30 AM");
    }
    else if (ch == 'C' || ch == 'c')
    {
        printf("Your Exam at 9:20 AM");
    }
    else if (ch == 'D' || ch == 'd')
    {
        printf("Your Exam at 10:30 AM");
    }
}

int main()
{
    char ch = '\0';
    BOOL bRet;

    printf("Enter Character\t");
    scanf("%c", &ch);

    bRet = ChkAlpha(ch);

    return 0;
}
