#include <stdio.h>

int RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    if (iStart < 0)
    {
        printf("invalid Character");
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iValue2 = 0;
    int iRet = 0;
    printf("enter the number");
    scanf("%d", &iValue);
    if (iValue <= 0)
    {
        printf("\ninvalid Character\nEnter proper input\n");
        return 0;
    }
    else
    {
        printf("enter 2nd the number");
        scanf("%d", &iValue2);
    }

    iRet = RangeDisplay(iValue, iValue2);
    printf("Addition is %d", iRet);
    return 0;
}