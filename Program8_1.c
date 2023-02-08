#include <stdio.h>

void NumBy5(int iNo)
{
    int iCnt = 0;
    if (iNo < 50 || iNo == 50)
    {
        printf("Small");
    }
    else if (iNo == 100 || iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
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
