#include <stdio.h>

int EvenFactMult(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    
    for (iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iSum = iCnt * iSum;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    iRet = EvenFactMult(iValue);
    printf("%d", iRet);
    return 0;
}
