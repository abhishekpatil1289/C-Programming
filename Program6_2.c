//  accept name from user and print that name

#include <stdio.h>
#include <stdbool.h>
#define TRUE = 1;
#define FALSE = 0;

typedef int BOOL;

int GraterOrSmaller(int iNo)
{
    if (iNo == 100)
    {
        return 100;
    }

    if (iNo > 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    BOOL iRet = 0;
    printf("Enter Number\n");
    scanf("%d", &iValue);
    iRet = GraterOrSmaller(iValue);
    if (iRet == 100)
    {
        printf("This is Equal Number");
    }
    else if (iRet == 1)
    {
        printf("Grater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}
