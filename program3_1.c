#include <stdio.h>

int PrintEvenOfNumber(int iNo)
{
    int iCnt=0;
    for (iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d ",(iCnt + 1)*2);
    }
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = PrintEvenOfNumber(iValue);
    return 0;
}

// #include <stdio.h>
// int main() {
//
//     scanf("%d", &n);

// }