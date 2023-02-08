#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  0000	0000	0000	0000	0000	0001	1100	0000
//   0        0      0       0       0       1       C       0
//  mask is :- 000001C0
// hex mask :- 0X000001C0

bool checkbit(int No)
{
    UINT mask = 0X000001C0;
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
        printf("7,15,21 and 28th bit is on");
    }
    else
    {
        printf("7,15,21 and 28th bit is off");
    }

    return 0;
}

//   0000    0000    0000    0011    1100    0010    0011    0101
//   0000    0000    0000    0010    0000    0000    0001    0000   &
// --------------------------------------------------------------------------
//    0       0       0
