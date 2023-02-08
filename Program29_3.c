#include <stdbool.h>
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

int SumAllEven(PNODE First)
{
  int iSum = 0;

  while (First != NULL)
  {
    if (First->data % 2 == 0)
    {
      iSum = iSum + First->data;
    }
    First = First->next;
  }
  return iSum;
}

int main()
{
  PNODE Head = NULL;
  int iValue = 0, iRet = 0;

  InsertFirst(&Head, 7);
  InsertFirst(&Head, 51);
  InsertFirst(&Head, 10);
  InsertFirst(&Head, 50);

  Display(Head);

  iRet = SumAllEven(Head);
  printf("Addition is %d\n", iRet);
  return 0;
}