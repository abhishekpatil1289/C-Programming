#include <stdio.h>

void ONEtoN(int iNo)
{
    // char ch = 'A';
    for (int i = iNo; i > 0; i--)
    {
        printf("%d   #   ", i);
    }
    printf("\n");
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