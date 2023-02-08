#include <stdio.h>
int FactDiff(int iNo)
{
    int i = 0, Fact = 0, NonFact = 0;

    for (i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            Fact = Fact + i;
        }
        else
        {
            NonFact = NonFact + i;
        }
    }
    printf("\n");
    printf("factors are    =>  %d\n", Fact);
    printf("Nonfactors are =>  %d\nDifferenc between Facrors and NonFactors is :  ", NonFact);
    return Fact - NonFact;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter The Number => ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}