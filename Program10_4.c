#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

double FsToCs(float fTemp)
{
    float Celsius = 0.0;

   return Celsius = (fTemp-32)*(5.0/9.0);
}

int main()
{
    float fValue = 0.0;
    double iRet = 0.0;

    printf("Enter The Temperature => ");
    scanf("%f", &fValue);

    iRet = FsToCs(fValue);
    printf("Celcious is  %0.4f%%", iRet);
    return 0;
}
