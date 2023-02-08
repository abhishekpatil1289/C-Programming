#include <stdio.h>
#include<ctype.h>

int DisplayConvert(char cValue)
{

    if (cValue >= 'a' && cValue <= 'z')
    {
        cValue = cValue - 32;
        printf("upper case is %c", cValue);
    }
    else if (isalpha(cValue))
    {
        cValue = tolower(cValue);
        printf("lower Case is %c", cValue);
    }
}

int main()
{
    char cValue = '\0';
    printf("enter character\n");
    scanf("%c", &cValue);
    DisplayConvert(cValue);
    return 0;
}