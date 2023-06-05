
// Display 1 to 5 five  times on screen 

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  if (iNo < 0)     // Updator for negative input
  {
    iNo = -iNo;
  }
  
  for (iCnt = 1; iCnt <=iNo; iCnt++)
  {
    printf("%d\n",iCnt);
  }
}


int main()
{
  int iValue = 0;

  printf("enter the frequency");
  scanf("%d",&iValue);
  Display(iValue);

  return 0;
}