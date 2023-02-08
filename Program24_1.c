#include <stdio.h>

int main()
{
    printf("ASCII TABLE\n");
    printf("Character\t Decimal\t Hexa\t\t Octa\t");

    for (int i = 0; i <= 127; i++)
    {
        printf("%c\t\t %d\t\t %x\t\t %o\n", i, i, i, i);
    }

    return 0;
}
