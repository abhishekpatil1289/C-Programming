#include <stdio.h>
#include <stdlib.h>

void MinMax(int Arr[], int iSize)
{
    int i = 0, iLarge = 0, Temp = 0, iCnt = 0, iCnt2 = 0;
    int iSmall = Arr[0];
    for (i = 0; i < iSize; i++)
    {
        Temp = Arr[i];
        while (Temp > 0)
        {
            iCnt++;
            Temp = Temp / 10;
        }
        if (iCnt == 3)
        {
            printf("%d\t", Arr[i]);
            iCnt2++;
        }
        iCnt = 0;
    }
    if (iCnt2 == 0)
    {
        printf("No 3 digit number are found");
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
    MinMax(ptr, iLength);
    // printf("Smallest Number is %d", iRet);
    free(ptr);
    return 0;
}