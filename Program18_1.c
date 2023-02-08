#include <stdio.h>

void AtoZ(int iNo)
{
    char ch = 'A';
    for (int i = 1; i <= iNo; i++)
    {
        printf("%c\t", ch);
        ch++;
    }
}

int main()
{

    // int *p = NULL;
    int iLength = 0;

    printf("Enter the Range\n");
    scanf("%d", &iLength);

    AtoZ(iLength);

    // free(p);
    return 0;
}