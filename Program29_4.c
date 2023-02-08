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

int SecondMaximum(PNODE Head)
{
  PNODE temp = Head;

  int First = 0;
  int Second = 0;

  while (temp != NULL)
  {
    if (First < temp->data)
    {
      Second = First;
      First = temp->data;
    }
    else if (Second < temp->data && Second != First)
    {
      Second = temp->data;
    }
    temp = temp->next;
  }
  return Second;
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

int main()
{
  PNODE Head = NULL;
  int iValue = 0, iRet = 0;

  InsertFirst(&Head, 85);
  InsertFirst(&Head, 82);
  InsertFirst(&Head, 19);
  InsertFirst(&Head, 37);
  InsertFirst(&Head, 46);
  InsertFirst(&Head, 73);

  Display(Head);

  iRet = SecondMaximum(Head);
  printf("2nd Largest number is :- %d\n", iRet);
  return 0;
}