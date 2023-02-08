#include <stdio.h>

// Enter Rows
// 4
// Enter Columns
// 5

// 4       4       4       4       4
// 3       3       3       3       3
// 2       2       2       2       2
// 1       1       1       1       1

void Pattern(int Col, int Row)
{
    int i = 0, j = 0;
    for (i = Col; i != 0; i--)
    {
        for (j = 1; j <= Row; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}
int main()
{
    int Col = 0, Row = 0;

    printf("Enter Rows\n");
    scanf("%d", &Col);

    printf("Enter Columns\n");
    scanf("%d", &Row);

    Pattern(Col, Row);

    return 0;
}