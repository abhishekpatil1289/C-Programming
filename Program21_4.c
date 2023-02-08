#include <stdio.h>

// Enter Row Number => 5
// Enter Columns Number => 5
//  1       2       3       4       5
// -1      -2      -3      -4      -5
//  1       2       3       4       5
// -1      -2      -3      -4      -5
//  1       2       3       4       5

void Patter(int Row, int Col)
{
    int ch = 1;
    int ch1 = -1;
    int i = 0, j = 0;
    for (i = 1; i <= Row; i++)
    {
        for (j = 1; j <= Col; j++)
        {
            if ((i % 2) != 0)
            {

                printf(" %d\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", ch1);
                ch1--;
            }
        }
        ch = 1;
        ch1 = -1;
        printf("\n");
    }
}

int main()
{
    int Row = 0, Col = 0;

    printf("Enter Row Number => ");
    scanf("%d", &Row);

    printf("Enter Columns Number => ");
    scanf("%d", &Col);

    Patter(Row, Col);
    return 0;
}