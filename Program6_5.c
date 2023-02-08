#include <stdio.h>
#include <float.h>
//                    20        16
float Percentage(float T, float M)
{
    if (T < M || M == 0)
    {
        printf("Wrong Data Enter");
        return 0;
    }
    return (M / T) * 100;
}

int main()
{
    int iValue = 0;
    int iValue1 = 0;
    float fRet = 0;

    printf("How many marks of the paper was => ");
    scanf("%d", &iValue);

    printf("Total marks you obtain => ");
    scanf("%d", &iValue1);

    fRet = Percentage(iValue, iValue1);
    printf("  %0.1f%%", fRet);
    return 0;
}
