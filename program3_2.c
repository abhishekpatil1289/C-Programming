

#include <stdio.h>

int DisplayFacators(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the num\n");
    scanf("%d", &iValue);
    iRet = DisplayFacators(iValue);
    return 0;
}