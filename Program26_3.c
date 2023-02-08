#include <stdio.h>

// Enter String:-
// AbhiShek ViLas Patil
// aBHIsHEK vIlAS pATIL

void StrOpposite(char *ch)
{
    while (*ch != '\0')
    {
        if (*ch >= 'a' && *ch <= 'z')
        {
            *ch = *ch -= 32;
        }
        else if (*ch >= 'A' && *ch <= 'Z')
        {
            *ch = *ch += 32;
        }
        ch++;
    }
}

int main()
{
    char str[30];
    printf("Enter String:-\n");
    scanf("%[^'\n']s", str);

    StrOpposite(str);
    printf(str);

    return 0;
}