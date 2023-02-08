#include <stdio.h>
void Pattern(int Col, int Row)
{
    int i = 0, j = 0;
    for (i = 1; i <= Col; i++)
    {
        for (j = 1; j <= Row; j++)
        {
            printf("*\t");
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