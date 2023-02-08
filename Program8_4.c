#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    else
    {
        //             1        5
        for (iCnt = 1; iCnt <= 10; iCnt++)
        {
            iSum = iNo * iCnt;
            printf("%d\t", iSum);
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
    Table(iValue);
    // printf("%d", iRet);
    return 0;
}
