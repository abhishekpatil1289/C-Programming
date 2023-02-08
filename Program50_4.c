#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  0000	0000	0000	0000	0000	0010	0100	0000
//   0       0       0       0       0       2       4        0
//  mask is :- 00000240
// hex mask :- 0X00000240

int OffBit(int No)
{
    UINT mask = 0X00000240;
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
