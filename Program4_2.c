#include <stdio.h>

int FactorsDisplayReverse(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        return 0;
    }
    for (iCnt = iNo; iCnt >= 0; iCnt--)
    {
        if (iNo % iCnt == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("enter character\n");
    scanf("%d", &iValue);
    iRet = FactorsDisplayReverse(iValue);
    printf("%d", iRet);
    return 0;
}

// #include <stdio.h>

// void FactRev(int iNo)
// {
//     int Fact = iNo / 2;

//     while (Fact > 0)
//     {
//         if (iNo % Fact == 0)
//         {
//             printf(" %d ", Fact);
//         }
//         Fact--;
//     }
// }
// int main()
// {
//     int iValue = 0;
//     printf("Enter number");
//     scanf("%d", &iValue);
//     FactRev(iValue);
//     return 0;
// }