
// Display "jay Ganesh" 5 times on screen 
#include<stdio.h>

//example of iteration

void Display(int iNo)
{
  int iCnt = 0;

  if (iNo < 0)
  {
    printf("enter positive number \n");
    return;
  }  
  
  for ( iCnt = 1; iCnt <=iNo; iCnt++)
  {
    printf("Jay Ganesh..\n");
  }
}

int main()
{
  int iValue = 0;
  printf("Enter the frequency of jay Ganesh statement  \n");
  scanf("%d",iValue);
  Display(iValue);

  return 0;
}