
// DisplayOddFacators Program 
// by mistakely sir you gave us the same program as number 3_2
// but i understand the previous program is DisplayEvenFactors then the next program is must be DisplayOddFactors
// So i did this 

#include <stdio.h>

int DisplayOddFacators(int iNo)
{
    int iCnt = 0;
//                  3
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt == 0) && (iCnt % 2 != 0))
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter the num\n");
    scanf("%d", &iValue);
    iRet = DisplayOddFacators(iValue);
    return 0;
}