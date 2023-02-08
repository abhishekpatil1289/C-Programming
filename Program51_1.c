#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UNIT;

bool OnOff(UNIT No, UNIT Pos)
{
    UNIT mask = 0X00000001;
    UNIT result = 0;

    mask = mask << (Pos - 1);
    result = mask & No;
    if (result == mask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UNIT No = 0;
    UNIT No2 = 0;
    bool bRet = false;
    printf("Enter the number :-\n");
    scanf("%d", &No);

    printf("Enter the Position\n");
    scanf("%d", &No2);

    bRet = OnOff(No, No2);
    if (bRet == true)
    {
        printf("bit on %d is ON", No2);
    }
    else
    {
        printf("bit on %d is OFF", No2);
    }
    return 0;
}
