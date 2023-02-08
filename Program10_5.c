// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// #include <float.h>

// double SquareMeter(float iNo)
// {
//     float Square = 0.0929;
//     float Ans = 0.0;

//     Ans = iNo * Square;
//     return Ans;
// }
// int main()
// {
//     float iValue = 0;

//     double iRet = 0.0;

//     printf("Enter Height => ");
//     scanf("%f", &iValue);

//     iRet = SquareMeter(iValue);
//     printf("Area of Circle is %f", iRet);
//     return 0;
// }

#include<stdio.h>

double FttoMt(float fFeet)
{
    return fFeet*0.0929;
}
int main()
{
    float fFeet=0.0;
    double fRet=0.0;

    printf("Enter Area In Square Feet => ");
    scanf("%f",&fFeet);

    fRet=FttoMt(fFeet);

    printf("Area In Square Meter => %f",fRet);

    return 0;
}