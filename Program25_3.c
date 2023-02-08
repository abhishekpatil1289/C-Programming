#include <stdio.h>

// Differenc between Capital Letters and Small Letters ?

// Enter strign
// MarvellouS
// 6

void Difference(char ch[])
{
    int iCnt = 0;
    int i = 0, small = 0, big = 0;

    while (ch[i] != '\0')
    {
        if ((ch[i] >= 'a') && (ch[i] <= 'z'))
        {
            small++;
        }
        if ((ch[i] >= 'A') && (ch[i] <= 'Z'))
        {
            big++;
        }
        i++;
    }
    printf("%d Differenc.\nCapital Letters are %d\t and Small Letters are %d", small - big, small, big);
}

int main()
{

    char Arr[20];

    printf("Enter strign\n");
    scanf("%[^'\n']s", Arr);

    Difference(Arr);

    return 0;
}