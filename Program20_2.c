#include <stdio.h>
void Pattern(int Col, int Row)
{
    int i = 0, j = 0;
    char ch = 'A';
    char ch2 = 'a';
    for (i = 1; i <= Col; i++)
    {

        for (j = 1; j <= Row; j++)
            if (i % 2 == 0)
            {
                printf("%c\t", ch2);
                ch2++;
            }
            else
            {
                printf("%c\t", ch);
                ch++;
            }
        printf("\n");
        ch = 'A';
        ch2 = 'a';
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