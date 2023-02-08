#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;

//  1111	1111	1111	1111	1111	1101	1011	1111
//   F        F      F       F       F       D       B       F
//  mask is :- FFFFFDBF
// hex mask :- 0XFFFFFDBF

int OffBit(int No)
{
    UINT mask = 0XFFFFFDBF;
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


