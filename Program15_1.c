#include <stdio.h>
#include <stdlib.h>

int Freuency(int Arr[], int iSize)
{
    int iCnt = 0, iFreuency = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] % 2) == 0)
        {
            iFreuency++;
        }
    }
    return iFreuency;
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

    printf("Enter %d elements\n", iLength);
    for (i = 0; i < iLength; i++)
    {
        printf("Enter Element %d => ", i + 1);
        scanf("%d", &ptr[i]);
    }

    iRet = Freuency(ptr, iLength);
    printf("frequency is %d", iRet);
    free(ptr);
    return 0;
}