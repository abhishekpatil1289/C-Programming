#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  0000	0000	0000	0000	0000	0000	0000	1111
//   0       0       0       0       0       0       0       F
//  mask is :- 0000000F
// hex mask :- 0X0000000F

int OffBit(int No)
{
    UINT mask = 0X0000000F;
    UINT Result = 0;

    Result = No | mask;

    return Result;
}

int main()
{
    UINT No = 0;
    int iRet = false;

    printf("enter the number \n");
    scanf("%d", &No);

    iRet = OffBit(No);
    printf("%d", iRet);
    return 0;
}
