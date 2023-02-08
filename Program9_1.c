#include <stdio.h>

void ReverseTable(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    else
    {
        for (iCnt = 1; iCnt <= (iNo * 2); iCnt++)
        {
            if (iCnt <= iNo)
            {
                printf("    *\t");
            }
            else
            {
                printf("    #\t");
            }
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    // iRet =
    ReverseTable(iValue);
    // printf("%d", iRet);
    return 0;
}
