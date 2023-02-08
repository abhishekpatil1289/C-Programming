#include <stdio.h>

int CountEven(int iNo)
{
    int iMult = 1, iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the number =>\n");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf(" => %d", iRet);
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