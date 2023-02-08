#include <stdio.h>
#include <stdlib.h>

void MinMax(int Arr[], int iSize)
{
    int i = 0, large = 0, iLarge = 0;
    int iSmall = Arr[0];
    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] > iLarge)
        {
            iLarge = Arr[i];
        }
        iLarge;

        if (Arr[i] < iSmall)
        {
            iSmall = Arr[i];
        }
    }
    printf("%d\t", iLarge - iSmall);
    printf("(%d-%d)", iLarge, iSmall);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iRet = 0, i = 0;

    printf("Enter Range\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // iRet =
    MinMax(ptr, iLength);
    // printf("Smallest Number is %d", iRet);
    free(ptr);
    return 0;
}