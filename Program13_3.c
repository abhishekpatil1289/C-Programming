#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, frequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    //          12034
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit > 3 && iDigit < 7))
        {
            frequency++;
        }
        iNo = iNo / 10;
    }
    return frequency;
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