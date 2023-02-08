#include <stdio.h>

// Enter Row => 4
// Enter Columns => 4
// #       *       *       *
// *       #       *       *
// *       *       #       *
// *       *       *       #

void Patter(int Row, int Col)
{
    int i = 0, j = 0;
    for (i = 1; i <= Row; i++)
    {
        for (j = 1; j <= Col; j++)
        {

            if (j == i)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int Row = 0, Col = 0;

    printf("Enter Row => ");
    scanf("%d", &Row);

    printf("Enter Columns => ");
    scanf("%d", &Col);

    Patter(Row, Col);
    return 0;
}
