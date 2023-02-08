#include <stdio.h>
#include <stdlib.h>

int PresentOrAbsent(int Arr[], int iSize)
{
    int Frequency = 0, i = 0;
    for (int i = 0; i < iSize; i++)
    {
        if (Arr[i] == 11)
        {
            Frequency++;
        }
    }
    // printf("%d", Frequency); // printf used for void
    return Frequency;           // return used for int 
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
    printf("%d", iRet);
    free(ptr);
    return 0;
}