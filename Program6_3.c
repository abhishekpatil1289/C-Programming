#include <stdio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

int EqualOrNot(int iNo1, int iNo2)

{
    if (iNo1 == iNo2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0, iValue2 = 0;
    BOOL iRet = 0;

    printf("Enter The Number => ");
    scanf("%d", &iValue);

    printf("Enter The Second => ");
    scanf("%d", &iValue2);

    iRet = EqualOrNot(iValue, iValue2);

    if (iRet == 1)
    {
        printf("Its Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;
}