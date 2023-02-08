#include <stdio.h>
#include <stdlib.h>

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

void DisplayPrime(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Addition(PNODE First)
{
    int iSum = 0;
    while (First != NULL)
    {
        iSum = iSum + First->data;
        First = First->next;
    }
    return iSum;
}

int main()
{
    PNODE Head = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&Head, 101);
    InsertFirst(&Head, 11);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    DisplayPrime(Head);

    // printf("Enter the Data that you want to find on Last Occrance\n");
    // scanf("%d", &iValue);

    iRet = Addition(Head);
    printf("Addition of All LL is :- %d", iRet);
    return 0;
}