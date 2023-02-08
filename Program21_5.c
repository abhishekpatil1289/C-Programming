#include <stdio.h>

// Enter Row Number => 4
// Enter Columns Number => 4
//  1       2       3       4
//  2       3       4       5
//  3       4       5       6
//  4       5       6       7

void Patter(int Row, int Col)
{
    int ch = 1;
    int i = 0, j = 0;
    for (i = 1; i <= Row; i++)
    {
        ch = i;
        for (j = 1; j <= Col; j++)
        {
            printf(" %d\t", ch);
            ch++;
        }
        
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