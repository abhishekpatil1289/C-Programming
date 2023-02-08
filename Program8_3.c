#include <stdio.h>

int Facrotial(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iSum = iSum * iCnt;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    iRet = Facrotial(iValue);
    printf("%d", iRet);
    return 0;
}
