#include <stdio.h>

int NonFactor(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
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
    NonFactor(iValue);
    return 0;
}




// #include<stdio.h>

// void NonFact(int iNo)
// {
//     int i=0;

//     for(i=2;i<iNo;i++)
//     {
//         if(iNo%i!=0)
//         {
//             printf(" %d ",i);
//         }
//     }
// }

// int main()
// {
//     int iValue = 0;
//     printf("Enter number => ");
//     scanf("%d",&iValue);

//     NonFact(iValue);

//     return 0;
// }



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