#include <stdio.h>
#include <stdlib.h>

void isInoPresent(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if (iCnt == iSize)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter Number Of Elements => ");
    scanf("%d", &iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if (ptr == NULL)
    {
        printf("Failed To Allocate Memory !");
        return -1;
    }
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter Element %d => ", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    printf("Enter Number U want to Find");
    scanf("%d", &iValue);

    // iRet =
    isInoPresent(ptr, iSize, iValue);

    //    if (iRet == 1)
    // {
    //     return TRUE;
    // }
    // else
    // {
    //     return FALSE;
    // }

    free(ptr);
    return 0;
}