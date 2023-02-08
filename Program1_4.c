#include <stdio.h>
// #include<stdbool.h>

typedef int BOOL;
#define true 1;
#define false 0;

int Check(int iNo)
{
    if ((iNo % 5) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    
    int iValue = 0;
    BOOL bRet = false;

    printf("Enter the value\n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if (bRet==1)
    {
        printf("divisible by 5");
    }
    else
    {
        printf("not divisible by 5");
    }
    return 0;
}