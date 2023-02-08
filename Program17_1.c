#include <stdio.h>
#include <stdlib.h>

int PresentOrAbsent(int Arr[], int iSize)
{
    int i = 0, large = 0, iLarge = 0;
    // Arr[0] = iLarge;
    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] > iLarge)
        {
            iLarge = Arr[i];
        }
    }
    return iLarge;
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

    iRet = PresentOrAbsent(ptr, iLength);
    printf("Largest Number is %d", iRet);
    free(ptr);
    return 0;
}