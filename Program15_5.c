#include <stdio.h>
#include <stdlib.h>
int Display(int Arr[], int iSize, int iValue)
{
    int iCnt = 0, iDig = 0, frequency = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iValue)
        {
            frequency++;
        }
    }
    if (frequency > 0)
    {
        return frequency;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
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

    iRet = Display(ptr, iSize, iValue);

    if (iRet == -1)
    {
        printf("Match Not Found");
    }
    else
    {
        printf("Fraquency is %d", iRet);
    }

    free(ptr);
    return 0;
}