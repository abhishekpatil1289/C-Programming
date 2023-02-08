#include <stdio.h>

// 2nd Version
void NegativeToPositive(int iNo)
{
    int Temp=0;
    //  10  > 0
    if (iNo > 0)
    {
        Temp = -iNo;
    }

    int iCnt = 0;
    for (iCnt = Temp; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    // iRet =
    NegativeToPositive(iValue);
    // printf("%d", iRet);
    return 0;
}
