#include <stdio.h>

int DollarToINR(int iNo)
{
    int iCnt = 0;
    int Dollar = 70;
    iCnt = iNo * Dollar;
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    iRet = DollarToINR(iValue);
    printf("%d", iRet);
    return 0;
}
