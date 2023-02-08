#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UNIT;

UNIT OnOff(UNIT No, UNIT Pos)
{
    UNIT mask = 0X00000001;
    UNIT result = 0;

    mask = mask << (Pos - 1);
    result = mask ^ No;
    return result;
}

int main()
{
    UNIT No = 0;
    UNIT No2 = 0;
    UNIT bRet = false;
    printf("Enter the number :-\n");
    scanf("%d", &No);

    printf("Enter the Position\n");
    scanf("%d", &No2);

    bRet = OnOff(No, No2);
    printf("updated number is %d ", bRet);
    return 0;
}
