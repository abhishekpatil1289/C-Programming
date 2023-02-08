#include <stdio.h>

void NumBy5(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t", iCnt * iNo);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    // iRet =
    NumBy5(iValue);
    // printf("%d", iRet);
    return 0;
}
