#include <stdio.h>

// 2nd Version
void PrintNumber(int iNo)
{
    int iCnt=0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("How many marks of the paper was => ");
    scanf("%d", &iValue);

    PrintNumber(iValue);

    return 0;
}
