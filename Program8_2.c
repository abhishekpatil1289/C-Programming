#include <stdio.h>

void NumInSpell(int iNo)
{

    switch (iNo)
    {
        case 9:printf("NINE");
        break;

        case 8:printf("EIGHT");
        break;

        case 7:printf("SAVEN");
        break;

        case 6:printf("SIX");
        break;

        case 5:printf("FIVE");
        break;

        case 4:printf("FOUR");
        break;

        case 3:printf("THREE");
        break;

        case 2:printf("TWO");
        break;

        case 1:printf("ONE");
        break;


    default:printf("Invalid Entry");
        break;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Value => ");
    scanf("%d", &iValue);
    // iRet = 
    NumInSpell(iValue);
    // printf("%d", iRet);
    return 0;
}
