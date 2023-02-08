#include <stdio.h>
#include <ctype.h>

int ChkVowel(char C)
{
    int word;
    word = ((C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u')||(C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U'));


    if (!isalpha(C))
    {
        printf("this is something else");
    }
    else if(word)    
    {
        printf("this is Vowel");
    }
    else
    {
        printf("this is not Vowel");
    }
}

int main()
{
    char C = '\0';
    printf("enter character\n");
    scanf("%c", &C);
    ChkVowel(C);
    return 0;
}