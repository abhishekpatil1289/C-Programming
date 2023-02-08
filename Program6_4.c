#include <stdio.h>

int EqualOrNot(int iNo1, int iNo2, int iNo3)

{
    int iSum = 0;
    if (iNo1 == 0)
    {
        iNo1 = 1;
    }
    else if (iNo2 == 0)
    {
        iNo2 = 1;
    }
    else if (iNo3 == 0)
    {
        iNo3 = 1;
    }

    iSum = iNo1 * iNo2 * iNo3;

    return iSum;
}

int main()
{
    int iValue = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Enter The Number => ");
    scanf("%d%d%d", &iValue, &iValue2, &iValue3);

    iRet = EqualOrNot(iValue, iValue2, iValue3);
    printf("%d", iRet);
    return 0;
}