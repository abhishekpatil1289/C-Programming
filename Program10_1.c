#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>


double CircleArea(float fRadius)
{
    float PI = 3.14;
    float Area = 0.0;

    Area = (PI * fRadius * fRadius);
    return Area;
}

int main()
{
    float fValue = 0.0;
    double iRet = 0.0;

    printf("Enter Radius => ");
    scanf("%f", &fValue);
    iRet = CircleArea(fValue);
    printf("Area of Circle is %0.4f%%", iRet);
    return 0;
}
