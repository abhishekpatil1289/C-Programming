#include <stdio.h>

// Enter Character A
// Small Letter of A is :- a

// Enter Character a
// Capital Letter of a is :- A

void ChkAlpha(char ch)
{
    int temp = 0;
    temp = ch;
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        ch += 32;
        printf("Small Letter of %c is :- %c", temp, ch);
    }
    else if ((ch >= 'a') && (ch <= 'z'))
    {
        ch -= 32;
        printf("Capital Letter of %c is :- %c", temp, ch);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char ch;

    printf("Enter Character\t");
    scanf("%c", &ch);

    ChkAlpha(ch);

    return 0;
}
