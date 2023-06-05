
// take two inpute from user and display first number is power of second number
#include<stdio.h>
#include<stdbool.h>


unsigned long int CalculatePower(int iBase, int iPower) // imp
{
 
  int iCnt = 0;
  unsigned long int iResult = 1;

  if ((iBase < 0)||(iPower < 0))
  {
    return 0;
  }
  

  for ( iCnt = 1; iCnt <= iPower; iCnt++)
  {
    iResult = iResult * iBase; 
  }

  return iResult; 
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  unsigned long int iRet = 0;

  printf("Enter number :\n");
  scanf("%d",&iValue1);
  printf("Enter number :\n");
  scanf("%d",&iValue2);

  iRet = CalculatePower(iValue1, iValue2);
 
  printf("%d Result is\n",iRet);

  
  return 0;
}

/*
Base = 2
power = 5;

result = 1
result = 2*2*2*2*2*2
result = result*2
result = result*2
result = result*2
result = result*2


*/