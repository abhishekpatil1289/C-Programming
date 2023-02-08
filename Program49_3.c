#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  0000	1000	0001	0000	0100	0000	0100	0000
//   0        8      1       0       4       0       4       0
//  mask is :- 08104040
// hex mask :- 0X08104040

bool checkbit(int No)
{
    UINT mask = 0X08104040;
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
