#include <stdio.h>

void ONEtoN(int iNo)
{
    int i = 0;
    int Cnt = iNo * 2;
    for (i = 2; i <= Cnt; i += 2)
    {
        if ((i % 2) == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{

    // int *p = NULL;
    int iLength = 0;

    printf("Enter the Range\n");
    scanf("%d", &iLength);

    ONEtoN(iLength);

    // free(p);
    return 0;
}
