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

void Display(PNODE First)
{
    while (First != NULL)
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int SearchFirstOccurance(PNODE First, int No)
{
    int iCnt = 0;
    while (First != NULL)
    {
        iCnt++;
        if (No == First->data)
        {
            return iCnt;
        }
        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;
    int iValue = 0, iRet = 0;

    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    printf("Enter the Data that you want to find\n");
    scanf("%d", &iValue);

    iRet = SearchFirstOccurance(Head, iValue);
    printf("%d", iRet);
    return 0;
}