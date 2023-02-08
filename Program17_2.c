#include <stdio.h>
#include <stdlib.h>

int Min(int Arr[], int iSize)
{
    int i = 0, iSmall = 0;
    iSmall = Arr[0];
    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] < iSmall)
        {
            iSmall = Arr[i];
        }
    }
    return iSmall;
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

    iRet = Min(ptr, iLength);
    printf("Smallest Number is %d", iRet);
    free(ptr);
    return 0;
}