#include <stdio.h>
#include <stdlib.h>

int PresentOrAbsent(int Arr[], int iSize, int iNo)
{
    int Frequency = 0, i = 0;
    for (int i = 0; i < iSize; i++)
    {
        if (Arr[i] == iNo)
        {
            Frequency++;
        }
    }
    // printf("%d", Frequency); // printf used for void
    return Frequency; // return used for int
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iRet = 0, i = 0, iNo = 0;

    printf("Enter Range\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    printf("Enter elements\n");
    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Enter Number you want to Search\n");
    scanf("%d", &iNo);

    iRet = PresentOrAbsent(ptr, iLength, iNo);
    printf("%d", iRet);
    free(ptr);
    return 0;
}