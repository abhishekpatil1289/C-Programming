#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int KMtoMeter(int iNo)
{
   int M=1000;
   int Ans=0;
   Ans=iNo*M;
   return Ans;
}

int main()
{
    int iKilometer =0;
    int Width = 0;
    int iRet = 0;

    printf("Enter The Km => ");
    scanf("%d", &iKilometer);

    iRet = KMtoMeter(iKilometer);
    printf("Area of Circle is %d", iRet);
    return 0;
}
