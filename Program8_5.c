#include <stdio.h>

void ReverseTable(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    else
    {
        for (iCnt = 10; iCnt > 0; iCnt--)
        {
            // iSum = iNo * iCnt;
            printf("%d\t", iCnt * iNo);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    // iRet =
    ReverseTable(iValue);
    // printf("%d", iRet);
    return 0;
}
