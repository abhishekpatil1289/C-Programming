#include <stdio.h>

// 2nd Version
void PatternOfStar(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt / 2) == 0)
        {
            printf("$   *\t");
        }
        else if (((iCnt / 2) != 0))
        {
            printf("$   *\t");
        }
    }
}

// 1st Version
// void Pattern(int iNo)
// {
//     int iCnt = 0;
//     for (iCnt = 1; iCnt <= iNo; iCnt++)
//     {
//         printf("$   *\t");
//     }
// }

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("How many marks of the paper was => ");
    scanf("%d", &iValue);

    PatternOfStar(iValue);

    return 0;
}
