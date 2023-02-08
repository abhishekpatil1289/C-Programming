#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int BOOL;

BOOL isInoPresent(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 11 == 0)
        {
            break;
        }
    }
    if (iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
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
    if (iRet == true)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is absent");
    }

    free(ptr);
    return 0;
}