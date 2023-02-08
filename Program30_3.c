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

int ReverseDigits(int iNo)
{
  int iDigit = 0, iRev = 1;
  int iTemp = iNo;

  while (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit == 0)
    {
      iDigit = 1;
    }
    iRev = iRev * iDigit;
    iNo = iNo / 10;
  }
  return iRev;
}

void GraterNumDigit(PNODE First)
{
  int iRet = 0;
  while (First != NULL)
  {
    iRet = ReverseDigits(First->data);
    printf("| %d |->", iRet);
    First = First->next;
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

int main()
{
  PNODE Head = NULL;
  int iValue = 0, iRet = 0;

  InsertFirst(&Head, 85);
  InsertFirst(&Head, 808);
  InsertFirst(&Head, 19);
  InsertFirst(&Head, 7);
  InsertFirst(&Head, 46);
  InsertFirst(&Head, 373);

  Display(Head);

  GraterNumDigit(Head);

  return 0;
}