#include <stdio.h>

int main()
{
    unsigned int num;
    unsigned int num2;
    printf("Enter the first number: ");
    scanf("%u", &num);
    
    printf("Enter the Second number: ");
    scanf("%u", &num2);

    int count = 0, count2 = 0;
    int iDigit = 0;
    while (num != 0)
    {
        iDigit = num % 2;
        count++;
        num = num / 2;
    }

    while (num2)
    {
        if (num2 & 1)
        {
            count2++;
        }
        num2 = num2 >> 1;
    } 

    printf("Number of ON bits: %d\n", count);
    
    printf("Number of ON bits: %d", count2);

    return 0;
}
