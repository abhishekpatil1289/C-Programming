#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  1111	1111	1111	1111	1111	1111	1011	1111
//   F        F      F       F       F       F       B       F
//  mask is :- FFFFFFBF
// hex mask :- 0XFFFFFFBF

int OffBit(int No)
{
    UINT mask = 0XFFFFFFBF;
    UINT Result = 0;

    Result = No & mask;
    
    return Result;
}

int main()
{
    UINT No = 0;
    int iRet = false;

    printf("enter the number \n");
    scanf("%d", &No);

    iRet = OffBit(No);
    printf("%d",iRet);
    return 0;
}


