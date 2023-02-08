#include <stdio.h>

void DisplayASCII(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%d\t %o\t %x\t", ch, ch, ch);
    }
    else
    {
        printf("you Entered :- %c", ch);
    }
}

int main()
{
    char ch;

    printf("Enter Character :- \t");
    scanf("%c", &ch);

    DisplayASCII(ch);

    return 0;
}
