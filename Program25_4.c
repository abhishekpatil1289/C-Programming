#include <stdio.h>
#include <stdbool.h>
typedef int BOOL;

BOOL ChkVowels(char *ch)
{
    while (*ch != '\0')
    {
        if ((*ch == 'a') || (*ch == 'e') || (*ch == 'i') || (*ch == 'o') || (*ch == 'u'))
        {
            return true;
        }
        else
        {
            return false;
        }
        ch++;
    }
}

int main()
{
    char Arr[10];
    BOOL bRet = false;
    printf("enter String\n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowels(Arr);
    if (bRet == true)
    {
        printf("Vowel Present");
    }
    else
    {
        printf("No Vowel Present in String");
    }

    return 0;
}