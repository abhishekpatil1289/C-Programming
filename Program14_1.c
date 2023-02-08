#include <stdio.h>
#include <stdlib.h>

void iDifference(int Arr[], int iSize)
{

    int iCnt = 0, iEven = 0, iOdd = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }
    printf("%d\t", iEven - iOdd);
    printf("(%d - %d)", iEven, iOdd);
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;
    printf("enter range\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("enter elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // iRet =
    iDifference(ptr, iLength);
    // printf("%d", iRet);
    free(ptr);
    return 0;
}