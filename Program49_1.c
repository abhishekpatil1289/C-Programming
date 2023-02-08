#include <stdbool.h>
#include <stdio.h>

typedef unsigned int UINT;


//  0000    0000    0000    0000    0100    0000    0000    0000
//   0        0      0       0       4       0       0       0
//  mask is :- 00004000
// hex mask :- 0X00004000

bool checkbit(int No)
{
    UINT mask =  0X00004000;
    UINT Result = 0;
    
    Result = No & mask;
    if (Result == mask)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    UINT No = 0;
    bool bRet = false;

    printf("enter the numbet");
    scanf("%d",&No);

    bRet = checkbit(No);
    if (bRet == true)
    {
        printf("15th bit is on");
    }
    else
    {
        printf("15th is off");
    }

    return 0;
}
