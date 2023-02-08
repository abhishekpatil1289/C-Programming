#include <stdio.h>
#include <stdlib.h>

int isInoPresent(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }
    printf("%d\t", iEven - iOdd);
    printf("(%d - %d)", iEven, iOdd);
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;
    int iRet = 0;

    printf("Enter the Range\n");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Elements\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    iRet = isInoPresent(ptr, iSize);

    free(ptr);
    return 0;
}