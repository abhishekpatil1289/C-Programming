#include <stdio.h>

// Enter Character :- T
// T       U       V       W       X       Y       Z

// Enter Character :- e
// e       d       c       b       a

void ChkAlpha(char ch)
{
    int temp = 0;
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        for (int i = ch; i <= 'Z'; i++)
        {
            printf("%c\t", i);
        }
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        for (int i = ch; i >= 'a'; i--)
        {
            printf("%c\t", i);
        }
    }
    else
    {
        printf("you Entered %c", ch);
    }
}

int main()
{
    char ch;

    printf("Enter Character :- \t");
    scanf("%c", &ch);

    ChkAlpha(ch);

    return 0;
}
