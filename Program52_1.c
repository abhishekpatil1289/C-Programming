#include <stdio.h>

int main()
{
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    int count = 0;
    while (num)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }

    printf("Number of ON bits: %d", count);

    return 0;
}
