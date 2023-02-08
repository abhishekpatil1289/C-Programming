#include <stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt = 0;
    //                      10
    for (iCnt = 1; iCnt <= iNo; iCnt++)                      // 1st Version (All are Work Same)

//  for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)                // 2nd Version (All are Work Same)
//  for (iCnt = 1; iCnt <= iNo; iCnt += 2)                      // 2rd Version (All are Work Same)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\t", iCnt);
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
    DisplayOdd(iValue);
    // printf("%d", iRet);
    return 0;
}
