#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if ((*First == NULL))
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display1(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

bool SumAllEven(int NO)
{
    int Temp = NO;
    int iSum = 0;
    printf("%d is iSum", iSum);
    for (int i = 1; i <= (NO / 2); i++)
    {
        if (NO % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return (iSum == Temp);
}

void DisplayPrime(PNODE First)
{
    while (First != NULL)
    {
        if (SumAllEven(First->data) == true)
        {
            printf(" %d is perfect number\n", First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&Head, 6);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 28);
    InsertFirst(&Head, 496);

    DisplayPrime(Head);

    return 0;
}