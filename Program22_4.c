#include <stdio.h>

// Enter Row => 6
// Enter Columns => 5
// *       *       *       *       *
// *       @       @       @       *
// *       @       @       @       *
// *       @       @       @       *
// *       @       @       @       *
// *       *       *       *       *

void Patter(int Row, int Col)
{
    int i = 0, j = 0;
    for (i = 1; i <= Row; i++)
    {
        for (j = 1; j <= Col; j++)
        {

            if (i == 1 || i == Row || j == 1 || j == Col)
            {
                printf("*\t");
            }
            else
            {
                printf("@\t");
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
