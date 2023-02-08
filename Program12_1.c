#include <stdio.h>

void DigitDisplayReverse(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    //          12034
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the number");
    scanf("%d", &iValue);

    // iRet =
    DigitDisplayReverse(iValue);
    // printf("elements are %d", iRet);
}