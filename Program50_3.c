#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  0000	0000	0000	0000	0000	0000	0100	0000
//   0       0       0       0       0       0       4        0
//  mask is :- 00000040
// hex mask :- 0X00000040

int OffBit(int No)
{
    UINT mask = 0X00000040;
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
