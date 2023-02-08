#include <stdio.h>

void DiffBetEvenOdd(int iNo)
{
    int iMult = 1, iDigit = 0;
    int iSum = 0, iSum2 = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit % 2) == 0)
        {
            iSum = iSum + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        iNo = iNo / 10;
    }
    printf("%d\t", iSum - iSum2);
    printf("(%d - %d) ", iSum, iSum2);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number =>\n");
    scanf("%d", &iValue);

    // iRet =
    DiffBetEvenOdd(iValue);

    // printf(" => %d", iRet);
    // if (BOOL==1)
    // {
    //     printf("it contains zero");
    // }
    // else
    // {
    //     printf("No zero available");
    // }
    return 0;
}