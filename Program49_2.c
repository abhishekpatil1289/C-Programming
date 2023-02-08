#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  0000    0000    0000    0010    0000    0000    0001    0000
//   0        0      0       2       0       0       1       0
//  mask is :- 00020010
// hex mask :- 0X00020010

bool checkbit(int No)
{
    UINT mask = 0X00020010;
    UINT Result = 0;

    Result = No & mask;
    if (Result == mask)
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
    UINT No = 0;
    bool bRet = false;

    printf("enter the number \n");
    scanf("%d", &No);

    bRet = checkbit(No);
    if (bRet == true)
    {
        printf("15th and 8th bit is on");
    }
    else
    {
        printf("15th and 8th bit is off");
    }

    return 0;
}

//   0000    0000    0000    0011    1100    0010    0011    0101
//   0000    0000    0000    0010    0000    0000    0001    0000   &
// --------------------------------------------------------------------------
//    0       0       0
