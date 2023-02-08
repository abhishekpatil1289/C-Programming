#include <stdio.h>
#include <stdlib.h>

void DivisibleByFive(int Arr[], int iSize)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 5) == 0 && (Arr[iCnt] % 3) == 0)
        {
            printf(" %d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, i = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the Range\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    if (ptr == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1;
    }

    printf("Enter elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // iRet =
    DivisibleByFive(ptr, iLength);
    // printf("")
    free(ptr);
    return 0;
}