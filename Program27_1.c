#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkFrequency(char *ch, char i)
{
    bool iCnt = false;

    while (*ch != '\0')
    {
        if (*ch == i)
        {
            iCnt = true;
            break;
        }
        ch++;
    }
    return iCnt;
}
int main()
{
    char ch[20];
    BOOL result = false;
    char i = '\0';

    printf("Please enter string\n");
    scanf("%[^'\n']s", ch);

    printf("Enter Character\n");
    scanf(" %c", &i);               // we use space before %c to avoid enter which is comes from scan %s
                                    //and because of that enter we cant able to enter character of %c

    if (ch == '\0')
    {
        printf("Empty String!!!");
    }
    else
    {
        result = ChkFrequency(ch, i);
        if (result == true)
        {
            printf("present");
        }
        else
        {
            printf("Absent");
        }
    }
    return 0;
}
