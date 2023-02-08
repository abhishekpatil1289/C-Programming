#include <stdio.h>
#include<stdbool.h>
#define TRUE 1;
#define FALSE 0;
typedef int BOOL;
BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    //          12034
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return 1;
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int BOOL =false;
    printf("enter the number");
    scanf("%d", &iValue);

    // iRet =
    BOOL=CheckZero(iValue);
    // printf("elements are %d", iRet);
    if (BOOL==1)
    {
        printf("it contains zero");
    }
    else
    {
        printf("No zero available");
    }
    return 0;
}