#include <stdio.h>

int Frequency(int iNo)
{
    int iDigit = 0, frequency = 0;

    // if (iNo < 0)
    // {
    //     iNo = -iNo;
    // }

    //          12034
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
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

    printf("enter the number");
    scanf("%d", &iValue);

    iRet = Frequency(iValue);

    printf("elements are %d", iRet);
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