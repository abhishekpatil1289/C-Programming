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

bool CheckPrime(int NO)
{
    int Temp = NO;
    int iSum = 0, flag = 0;

    for (int i = 2; i <= NO / 2; i++)
    {
        if (NO % i == 0)
        {
            flag = false;
            return;
        }
    }
    return 1;
}

void DisplayPrime(PNODE First)
{
    while (First != NULL)
    {
        if (CheckPrime(First->data) == true)
        {
            printf(" %d is prime number\n", First->data);
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&Head, 7);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 89);
    InsertFirst(&Head, 17);
    InsertFirst(&Head, 11);
    InsertFirst(&Head, 53);
    InsertFirst(&Head, 496);

    DisplayPrime(Head);

    return 0;
}