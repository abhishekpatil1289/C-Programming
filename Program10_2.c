#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

double CircleArea(float fHeight,float fWidth)
{
    // float PI = 3.14;
    float Area = 0.0;

    Area = fWidth*fHeight;
    return Area;
}

int main()
{
    float Height = 0.0;
    float Width = 0.0;
    double iRet = 0.0;

    printf("Enter Height => ");
    scanf("%f", &Height);

    printf("Enter Width => ");
    scanf("%f", &Width);

    iRet = CircleArea(Height,Width);
    printf("Area of Circle is %0.3f%%", iRet);
    return 0;
}
