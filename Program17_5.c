#include <stdio.h>
#include <stdlib.h>

void SumOfDigit(int Arr[], int iSize)
{
    int i = 0, iLarge = 0, Temp = 0, iSum = 0, iCnt = 0;
    int iSmall = Arr[0];
    for (i = 0; i < iSize; i++)
    {
        Temp = Arr[i];
        while (Temp > 0)
        {
            iCnt = Temp % 10;
            iSum = iSum + iCnt;
            Temp = Temp / 10;
        }
        printf("%d\t", iSum);
        iSum = 0, iCnt = 0;
    }
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
    SumOfDigit(ptr, iLength);
    // printf("Smallest Number is %d", iRet);
    free(ptr);
    return 0;
}