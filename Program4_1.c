#include <stdio.h>

int FactorsMult(int iNo)
{
    int iCnt = 0;
    int iSum = 1;

    for (iCnt = 1; iCnt < iNo; iCnt++)        
    {
        if ((iNo % iCnt) == 0)
        {
            iSum = iSum * iCnt;                 
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter character\n");
    scanf("%d", &iValue);
    iRet = FactorsMult(iValue);
    printf("%d", iRet);
    return 0;
}
