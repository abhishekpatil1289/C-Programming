#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0, iValue2 = 0;
    int iRet = 0;
    printf("enter the number");
    scanf("%d", &iValue);

    printf("enter 2nd the number");
    scanf("%d", &iValue2);

    // iRet =
    RangeDisplay(iValue, iValue2);
    // printf("elements are %d", iRet);
}